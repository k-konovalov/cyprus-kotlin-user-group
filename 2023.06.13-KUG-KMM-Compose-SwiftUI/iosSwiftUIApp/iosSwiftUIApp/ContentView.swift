import SwiftUI
import rickAndMortyApi

struct ContentView: View {
    @ObservedObject private(set) var viewModel: ViewModel
    var body: some View {
        ScrollView {
            LazyVStack {
                ForEach(viewModel.characters, id: \.self) { value in
                    HStack {
                        AsyncImage(url: URL(string: value.image)) { image in
                            image.resizable()
                        } placeholder: {
                            ProgressView()
                        }
                        .frame(width:56, height: 56)
                        VStack {
                            Text(value.name)
                                .frame(maxWidth: .infinity, alignment: .leading)
                                .font(.title2)
                            Text("\(value.species) (\(value.gender))")
                                .frame(maxWidth: .infinity, alignment: .leading)
                                .font(.body)
                                .foregroundColor(.gray)
                        }
                        .frame(maxWidth: .infinity, alignment: .leading)
                        Text(value.status.text)
                            .foregroundColor(.init(value.status.colorRgbLong))
                    }
                    .padding(.all)
                }
            }
        }
    }
}

extension ContentView {

    @MainActor
    class ViewModel: ObservableObject {
        let api: RickAndMortyCharactersApi
        @Published var characters = [CharacterDTO]()

        init(api: RickAndMortyCharactersApi) {
            self.api = api
            loadCharacters()
        }

        func loadCharacters() {
            Task {
                do {
                    let characters = try await api.getCharacters().results
                    self.characters = characters
                } catch {
                    // shit happens
                }
            }
        }
    }
}

extension Color {
    init(_ hex: Int64, alpha: Double = 1) {
        self.init(
            .sRGB,
            red: Double((hex >> 16) & 0xFF) / 255,
            green: Double((hex >> 8) & 0xFF) / 255,
            blue: Double(hex & 0xFF) / 255,
            opacity: alpha
        )
    }
}
