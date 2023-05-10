// 9056 : 반복제어문3 - 연습문제2
// 아래 모양과 같이 출력하는 프로그램을 for문을 이용하여 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}