#include <stdio.h>

int main() {
    int r, c, size;
    printf("�����밮�ĵĴ�С����������15-25֮�����������");
    scanf("%d", &size);

    int half = size / 2;
    int quarter = size / 4;

    for (r = 0; r < size; r++) {
        for (c = 0; c <= size; c++) {
            // ���Ͻ�
            if ((r < half && c < half - r) ||
                (r < half && c > half + r)) {
                printf("  ");
            }
            // ���Ͻ�
            else if ((r < half && c >= half - r && c <= half + r)) {
                printf("* ");
            }
            // ���½�
            else if ((r >= half && r < size - quarter && c < size / 4) ||
                     (r >= half && r < size - quarter && c > size - (size / 4) - 1)) {
                printf("  ");
            }
            // ���½�
            else if ((r >= half && r < size - quarter && c >= size / 4 && c <= size - (size / 4) - 1) ||
                     (r >= size - quarter && c < size / 2) ||
                     (r >= size - quarter && c > size / 2)) {
                printf("* ");
            }
            // �м�Ͳ�ݮ
            else {
                printf("?? ");
            }
        }
        printf("\n");
    }

    return 0;
}

