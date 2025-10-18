extern "C" {
    void image_inversion(unsigned char* image, int width, int height) {
        for (int i = 0; i < width * height * 4; i += 4) {
            // 알파 채널(매 4번째)은 건너뛰고 RGB만 반전
            image[i] = 255 - image[i];          // RED
            image[i + 1] = 255 - image[i + 1];  // GREEN
            image[i + 2] = 255 - image[i + 2];  // BLUE
        }
    }
}
