package com.konovalov.draggable.coin.view.compose

import android.os.Bundle
import android.util.Log
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.ComposeView
import androidx.compose.ui.platform.ViewCompositionStrategy
import com.example.myapplication.network.RickAndMortyHttpClient
import com.google.accompanist.themeadapter.appcompat.AppCompatTheme
import com.konovalov.draggable.coin.view.core.ui.theme.DraggableScaredViewTheme
import java.util.concurrent.Executors

class ComposeFragment : Fragment() {
    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ) = ComposeView(requireContext())
        .apply {
            setContent {
                setViewCompositionStrategy(
                    ViewCompositionStrategy.DisposeOnLifecycleDestroyed(viewLifecycleOwner)
                )
                AppCompatTheme {
                    Surface(
                        modifier = Modifier.fillMaxSize(),
                        color = MaterialTheme.colors.background
                    ) {
                        Greeting("Android")
                        Text(text = "Hello world.")
                    }
                }
            }
        }
/*        .also {
            Executors.newSingleThreadExecutor().execute {
                RickAndMortyHttpClient().getCharacters().also {
                    Log.e(javaClass.simpleName, it.toString())
                }
            }
        }*/
}


