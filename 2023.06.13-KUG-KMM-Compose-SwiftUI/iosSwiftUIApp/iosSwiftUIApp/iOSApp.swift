import SwiftUI
import rickAndMortyApi

@main
struct iOSApp: App {
    let api = RickAndMortyCharactersApi()
	var body: some Scene {
		WindowGroup {
            ContentView(viewModel: .init(api: api))
		}
	}
}
