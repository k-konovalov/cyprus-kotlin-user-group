//
//  SomeLogic.swift
//  TestApp
//
//  Created by Konovalov Kirill on 31.05.2023.
//

import Foundation
import KmmTestApiModule

class NetworkDelegate {
    
    let httpClient = RickAndMortyHttpClient()
    
    func getTestEventName() -> String { return TelemetryTestEvent.ohmy.name }
    
    func getCharactersFromNetwork() async throws -> CharactersDTO? {
        // Task {}
        return try httpClient.getCharacters()
    }
}
