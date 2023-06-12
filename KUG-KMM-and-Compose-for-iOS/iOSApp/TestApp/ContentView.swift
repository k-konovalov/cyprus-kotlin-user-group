//
//  ContentView.swift
//  TestApp
//
//  Created by Konovalov Kirill on 31.05.2023.
//

import SwiftUI
import KmmTestApiModule

struct ContentView: View {
    let delegate: NetworkDelegate = NetworkDelegate()
    
    @State private var charactersDTO: CharactersDTO = CharactersDTO.init(info: InfoDTO.init(count: 0, pages: 0, next: nil, prev: nil), results: [CharacterDTO.init(id: 0, name: "", status: "", species: "", type: "", gender: "", origin: OriginDTO.init(name: "", url: ""), location: LocationDTO.init(name: "", url: ""), image: "", episode: [], url: "", created: "")])
    
    @State private var sourceCode = "Loading…"
    
    let colors: [Color] = [.red, .green, .blue]
    
    var body: some View {
        VStack {
            /*Image(systemName: "globe")
                .imageScale(.large)
                .foregroundColor(.accentColor)*/
            Text("Info block")
            Text("Count: " + charactersDTO.info.count.formatted()) // observe on sourceCode
            Text("Pages: " + charactersDTO.info.pages.formatted())
            
            List {
                ForEach(charactersDTO.results, id: \.self) { characterDTO in

                    VStack {
                        Text(characterDTO.name).font(.title3)
                        Text("Status: " + characterDTO.status + " - " + characterDTO.species)
                        Text("Last known location:").foregroundColor(.gray)
                        Text(characterDTO.location.name)
                        Text("First seen in:").foregroundColor(.gray)
                        let episodeNum = (characterDTO.episode.first ?? "0").suffix(1)
                        Text(episodeNum + " episode")
                       
                    }.frame(maxWidth: .infinity, alignment: .center)
                        
                }
            }.background(.gray)
        }
        .task {
            let _charactersDTO = try? await delegate.getCharactersFromNetwork()
            if (_charactersDTO != nil) {
                charactersDTO = _charactersDTO!
            }
        }
        .padding()
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
