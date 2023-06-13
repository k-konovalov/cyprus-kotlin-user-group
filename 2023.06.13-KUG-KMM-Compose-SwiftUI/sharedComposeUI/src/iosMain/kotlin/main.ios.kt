import androidx.compose.ui.graphics.ImageBitmap
import androidx.compose.ui.graphics.toComposeImageBitmap
import androidx.compose.ui.window.ComposeUIViewController

fun MainViewController() = ComposeUIViewController { App() }

class ImageFactoryImpl : ImageFactory {
    override fun imageBitmapFromBytes(encodedImageData: ByteArray): ImageBitmap {
        return org.jetbrains.skia.Image.makeFromEncoded(encodedImageData).toComposeImageBitmap()
    }

}

actual fun getImageFactory(): ImageFactory = ImageFactoryImpl()
