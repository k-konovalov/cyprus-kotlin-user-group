import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.PaddingValues
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.defaultMinSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.mutableStateListOf
import androidx.compose.runtime.mutableStateMapOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ImageBitmap
import androidx.compose.ui.graphics.RectangleShape
import androidx.compose.ui.graphics.SolidColor
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import kotlinx.coroutines.launch
import xyz.scorpikk.rickandmortyapi.CharacterDTO
import xyz.scorpikk.rickandmortyapi.RickAndMortyCharactersApi

val api = RickAndMortyCharactersApi()

@Composable
fun App() {
    MaterialTheme {
        val coroutineScope = rememberCoroutineScope()
        val characters = remember { mutableStateListOf<CharacterDTO>() }
        val charactersImage = remember { mutableStateMapOf<Int, ByteArray>() }
        var loaded = remember { mutableStateOf(false) }
        if (!loaded.value) {
            loaded.value = true
            coroutineScope.launch {
                val dtos = api.getCharacters().results
                characters.addAll(dtos)
                dtos.forEach {
                    charactersImage[it.id] = api.getImage(it.image)
                }
            }
        }


        LazyColumn(Modifier.fillMaxWidth(), contentPadding = PaddingValues(16.dp)) {
            items(characters) { character ->
                Row(
                    Modifier.fillMaxWidth().defaultMinSize(minHeight = 72.dp),
                    verticalAlignment = Alignment.CenterVertically
                ) {
                    Box(Modifier.size(56.dp).background(Color.LightGray)) {
                        charactersImage[character.id]?.let {
                            Image(
                                getImageFactory().imageBitmapFromBytes(it),
                                contentDescription = character.name
                            )
                        }
                    }
                    Spacer(Modifier.size(16.dp))
                    Column(Modifier.weight(1f)) {
                        Text(
                            character.name,
                            fontSize = 16.sp,
                            color = Color(0xFF1D1B20)
                        )
                        Text(
                            "${character.species} (${character.gender})",
                            fontSize = 14.sp,
                            color = Color(0xFF49454F)
                        )
                    }
                    Spacer(Modifier.size(16.dp))
                    Text(
                        character.status.text,
                        fontSize = 11.sp,
                        color = Color(character.status.colorRgbLong)
                    )
                }
                Spacer(Modifier.size(8.dp))
            }
        }
    }
}

interface ImageFactory {
    fun imageBitmapFromBytes(encodedImageData: ByteArray): ImageBitmap
}

expect fun getImageFactory(): ImageFactory
