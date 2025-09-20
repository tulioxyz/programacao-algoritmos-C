#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* img = fopen("imagem.bmp", "rb");
    if (img == NULL) {
        perror("Erro ao abrir a imagem");
        return 1;
    }

    fseek(img, 10, SEEK_SET);
    int pixelOffset;
    fread(&pixelOffset, sizeof(int), 1, img);

    int width, height;
    short bitsPerPixel;
    fseek(img, 18, SEEK_SET);
    fread(&width, sizeof(int), 1, img);
    fread(&height, sizeof(int), 1, img);
    fseek(img, 28, SEEK_SET);
    fread(&bitsPerPixel, sizeof(short), 1, img);

    if (bitsPerPixel != 24) {
        printf("Imagem não é 24bpp.\n");
        fclose(img);
        return 1;
    }

    int invertido = 0;
    if (height < 0) {
        height = -height;
        invertido = 1;
    }

    int padding = (4 - (width * 3) % 4) % 4;

    fseek(img, pixelOffset, SEEK_SET);

    printf("Lendo imagem %dx%d...\n", width, height);

    for (int y = (invertido ? 0 : height - 1);
         (invertido ? y < height : y >= 0);
         (invertido ? y++ : y--)) {
        for (int x = 0; x < width; x++) {
            unsigned char b, g, r;
            if (fread(&b, 1, 1, img) != 1 ||
                fread(&g, 1, 1, img) != 1 ||
                fread(&r, 1, 1, img) != 1) {
                printf("Erro ao ler pixel [%d,%d]\n", x, y);
                fclose(img);
                return 1;
            }
            if (y == 0 && x < 5)
                printf("Pixel[%d,%d] = R:%d G:%d B:%d\n", x, y, r, g, b);
        }
        fseek(img, padding, SEEK_CUR);
    }

    fclose(img);
    return 0;
}
