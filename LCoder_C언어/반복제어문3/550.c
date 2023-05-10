// 550 : 반복제어문3 - 자가진단3
// 자연수 n을 입력받아서 다음과 같이 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int i, j;
    int n;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = n; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}