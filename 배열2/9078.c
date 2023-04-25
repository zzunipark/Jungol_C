#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int i, j;
    int arr1[3][3];
    int arr2[3][3];

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("첫 번째 배열 %d행 ", i + 1);
            scanf("%d", &arr1[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("두 번째 배열 %d행 ", i + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}