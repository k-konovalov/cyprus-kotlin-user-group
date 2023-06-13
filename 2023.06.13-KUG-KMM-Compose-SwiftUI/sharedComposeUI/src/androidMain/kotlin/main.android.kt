import android.graphics.BitmapFactory
import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.ImageBitmap
import androidx.compose.ui.graphics.asImageBitmap

@Composable
fun MainView() = App()

class ImageFactoryImpl : ImageFactory {
    override fun imageBitmapFromBytes(encodedImageData: ByteArray): ImageBitmap {
        return BitmapFactory.decodeByteArray(encodedImageData, 0, encodedImageData.size).asImageBitmap()
    }

}

actual fun getImageFactory(): ImageFactory = ImageFactoryImpl()
