#include <stdio.h>
int main() {
    int i, j, x, a[11];
    printf("请输入10个数：\n");

    for (i = 1; i < 11; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < 10; i++)
        for (j = 1; j < 11 - i; j++)
            if (a[j] > a[j + 1]) {
                x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;
            }

    printf("排序后的顺序是：\n");

    for (i = 1; i <= 10; i++) {
        printf("%5d", a[i]);
    }

    printf("\n");
    return 0;
}