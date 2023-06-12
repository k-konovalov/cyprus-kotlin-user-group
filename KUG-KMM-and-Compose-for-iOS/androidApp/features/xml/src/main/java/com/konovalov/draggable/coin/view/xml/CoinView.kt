package com.konovalov.draggable.coin.view.xml

import android.content.Context
import android.graphics.Canvas
import android.graphics.Rect
import android.util.AttributeSet
import android.view.*
import android.view.GestureDetector.SimpleOnGestureListener
import android.widget.ImageView
import android.widget.Toast
import androidx.appcompat.content.res.AppCompatResources
import androidx.core.graphics.drawable.toBitmap
import androidx.core.view.children
import androidx.core.view.get
import androidx.recyclerview.widget.RecyclerView
import com.konovalov.draggable.coin.view.core.ui.R as coreUi

class CoinView(context: Context, attrs: AttributeSet) : RecyclerView(context, attrs) {

    val coin by lazy { AppCompatResources.getDrawable(context, coreUi.drawable.coin)!! }
    val coinBitmap by lazy { coin.toBitmap() }

    val touchListener = RvTouchEventProvider(context, this)

    init {
        addOnItemTouchListener(touchListener)
        addItemDecoration(MarginItemDecoration(20))
        // itemAnimator
        adapter = CustomAdapter(listOf("One", "Two", "One", "Two", "One", "Two"))
    }

    override fun onDraw(c: Canvas?) {
        super.onDraw(c)
        if (touchListener.longPressInvoked)
            c?.drawBitmap(
                coinBitmap,
                touchListener.eventX - coinBitmap.width / 2,
                touchListener.eventY - coinBitmap.height / 2,
                null
            )
    }

    class RvTouchEventProvider(context: Context, private val observableView: View) :
        SimpleOnItemTouchListener() {
        var eventX = 0f
        var eventY = 0f

        var lastTouchedItemPos = -1
        var lastTouchedItemViewId = 0

        var longPressInvoked = false

        val touchListener = GestureDetector(context, SuperSimpleGestureListener())

        override fun onInterceptTouchEvent(rv: RecyclerView, e: MotionEvent): Boolean {
            if (e.action == MotionEvent.ACTION_DOWN) {// && rv.getScrollState() == RecyclerView.SCROLL_STATE_SETTLING) {
                rv.findChildViewUnder(e.x, e.y)?.run {
                    lastTouchedItemPos = rv.getChildAdapterPosition(this)
                    lastTouchedItemViewId = id
                    alpha = 0.5f
                    performClick()
                }
                return true;
            }
            return false;
        }

        override fun onTouchEvent(rv: RecyclerView, event: MotionEvent) {
            when (event.action) {
                MotionEvent.ACTION_MOVE -> {
                    if (longPressInvoked && lastTouchedItemPos > -1) {
                        eventX = event.x
                        eventY = event.y
                        observableView.postInvalidate()
                    }
                    if (lastTouchedItemPos > -1) {
                        rv.children
                            .minus(rv[lastTouchedItemPos])
                            .forEach { it.alpha = 1f }
                        rv.findChildViewUnder(eventX, eventY)?.alpha = 0.5f
                    }
                }
                MotionEvent.ACTION_UP -> {
                    longPressInvoked = false
                    observableView.postInvalidate()
                    rv.findChildViewUnder(event.x, event.y)?.also {
                        val position = rv.getChildAdapterPosition(it)
                        if (position != lastTouchedItemPos)
                            Toast.makeText(
                                it.context,
                                "Transfer coin from $lastTouchedItemPos to $position pos",
                                Toast.LENGTH_SHORT
                            )
                                .show()
                    }
                    rv.children.forEach {
                        it.alpha = 1f
                    }

                    lastTouchedItemPos = -1
                }
                else -> touchListener.onTouchEvent(event)
            }
        }

        private inner class SuperSimpleGestureListener : SimpleOnGestureListener() {
            override fun onLongPress(event: MotionEvent) {
                // Почему-то срабатывает при простом клике
                //eventX = event.x
                //eventY = event.y
                //observableView.postInvalidate()
                longPressInvoked = true
            }
        }
    }

    class CustomAdapter(private val dataSet: List<String>) :
        RecyclerView.Adapter<CustomAdapter.ViewHolder>() {

        class ViewHolder(view: View) : RecyclerView.ViewHolder(view) {
            val coinView = view.findViewById<ImageView>(R.id.iv_coin)
        }

        override fun onCreateViewHolder(viewGroup: ViewGroup, viewType: Int) = ViewHolder(
            LayoutInflater.from(viewGroup.context)
                .inflate(R.layout.draggable_item, viewGroup, false)
        )

        override fun onBindViewHolder(viewHolder: ViewHolder, position: Int) {

            viewHolder.itemView.setOnClickListener {
                //viewHolder.coinView.alpha = if(viewHolder.coinView.alpha != 1f) 1f else 0.5f
            }

        }

        override fun getItemCount() = dataSet.size
    }

    class MarginItemDecoration(private val spaceSize: Int) : RecyclerView.ItemDecoration() {
        override fun getItemOffsets(
            outRect: Rect, view: View,
            parent: RecyclerView,
            state: RecyclerView.State
        ) {
            with(outRect) {
                //if (parent.getChildAdapterPosition(view) == 0) {
                top = spaceSize
                //}
                left = spaceSize
                right = spaceSize
                bottom = spaceSize
            }
        }
    }
}
