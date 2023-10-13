#include <stdio.h>

int main() {
    int r, c, size;
    printf("请输入爱心的大小（建议输入15-25之间的奇数）：");
    scanf("%d", &size);

    int half = size / 2;
    int quarter = size / 4;

    for (r = 0; r < size; r++) {
        for (c = 0; c <= size; c++) {
            // 左上角
            if ((r < half && c < half - r) ||
                (r < half && c > half + r)) {
                printf("  ");
            }
            // 右上角
            else if ((r < half && c >= half - r && c <= half + r)) {
                printf("* ");
            }
            // 左下角
            else if ((r >= half && r < size - quarter && c < size / 4) ||
                     (r >= half && r < size - quarter && c > size - (size / 4) - 1)) {
                printf("  ");
            }
            // 右下角
            else if ((r >= half && r < size - quarter && c >= size / 4 && c <= size - (size / 4) - 1) ||
                     (r >= size - quarter && c < size / 2) ||
                     (r >= size - quarter && c > size / 2)) {
                printf("* ");
            }
            // 中间和草莓
            else {
                printf("?? ");
            }
        }
        printf("\n");
    }

    return 0;
}

