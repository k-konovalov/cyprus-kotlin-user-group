package com.konovalov.draggable.coin.view

import android.os.Bundle
import android.os.PersistableBundle
import androidx.appcompat.app.AppCompatActivity
import androidx.navigation.findNavController
import androidx.navigation.ui.setupWithNavController
import com.google.android.material.bottomnavigation.BottomNavigationView
import com.konovalov.draggable.coin.view.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity(R.layout.activity_main) {
    private val navController
        get() = findNavController(R.id.nav_host_fragment_content_main)

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?, persistentState: PersistableBundle?) {
        super.onCreate(savedInstanceState, persistentState)
        //binding = ActivityMainBinding.inflate(layoutInflater)
        //setContentView(binding.root)
        setBottomNav()
    }

    private fun setBottomNav() {
        findViewById<BottomNavigationView>(R.id.main_bottom_nav).also {
            it.setupWithNavController(navController)
        }

        //binding.mainBottomNav.
    }
}
