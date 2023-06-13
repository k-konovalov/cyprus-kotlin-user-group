package xyz.scorpikk.rickandmortyapi

import io.ktor.client.HttpClient
import io.ktor.client.call.body
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.request.get
import io.ktor.serialization.kotlinx.json.json
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.Json

class RickAndMortyCharactersApi {

    private val httpClient = HttpClient {
        install(ContentNegotiation) {
            json(Json {
                ignoreUnknownKeys = true
            })
        }
    }

    suspend fun getCharacters(): CharactersDTO {
        val response = httpClient.get("https://rickandmortyapi.com/api/character")
        return response.body()
    }

    suspend fun getImage(url: String): ByteArray {
        val response = httpClient.get(url)
        return response.body()
    }
}

@Serializable
data class CharactersDTO(
    @SerialName("info")
    val info: InfoDTO,
    @SerialName("results")
    val results: List<CharacterDTO>
)

@Serializable
data class InfoDTO(
    @SerialName("count")
    val count: Int,
    @SerialName("pages")
    val pages: Int,
    @SerialName("next")
    val next: String?,
    @SerialName("prev")
    val prev: String?
)

@Serializable
data class CharacterDTO(
    @SerialName("id")
    val id: Int,
    @SerialName("name")
    val name: String,
    @SerialName("status")
    val status: StatusDTO,
    @SerialName("species")
    val species: String,
    @SerialName("type")
    val type: String,
    @SerialName("gender")
    val gender: String,
    @SerialName("origin")
    val origin: OriginDTO,
    @SerialName("location")
    val location: LocationDTO,
    @SerialName("image")
    val image: String,
    @SerialName("episode")
    val episode: List<String>,
    @SerialName("url")
    val url: String,
    @SerialName("created")
    val created: String //Date?
)

@Serializable
data class OriginDTO(
    @SerialName("name")
    val name: String,
    @SerialName("url")
    val url: String
)

@Serializable
data class LocationDTO(
    @SerialName("name")
    val name: String,
    @SerialName("url")
    val url: String
)

enum class StatusDTO(val text: String, val colorRgbLong: Long) {
    Alive("Alive",0xFF6FCF97),
    Dead("Dead",0xFFEB5757),
    unknown("unknown",0xFFBDBDBD),
}
