package com.example.myapplication.network

import io.ktor.client.HttpClient
import io.ktor.client.request.get
import io.ktor.client.statement.HttpResponse
import io.ktor.client.statement.bodyAsText
import io.ktor.util.logging.Logger
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.runBlocking
import kotlinx.serialization.json.Json

class RickAndMortyHttpClient {
    private val httpClient = HttpClient()
    private val json = Json { ignoreUnknownKeys = true }
    private val coroutineScope: CoroutineScope = CoroutineScope(Dispatchers.Default)

    @Throws(Exception::class)
    fun getCharacters(): CharactersDTO {
        return runBlocking {
            val response: HttpResponse = httpClient.get("https://rickandmortyapi.com/api/character")
            val retVal = with(response.status) {
                (if (value in 200..299) response.bodyAsText() else "").ifEmpty {
                    val msg = "Something went wrong during network request:" +
                            "\n\tcode: $value" +
                            "\n\tdescription: $description"
                    throw IllegalStateException(msg)
                }
            }
            json.decodeFromString<CharactersDTO>(retVal) }
        }

}
