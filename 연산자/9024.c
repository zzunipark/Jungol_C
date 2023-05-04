// 9024 : 연산자 - 연습문제6
// 3개의 정수 a, b, c를 입력받아서 a가 b보다 큰지, b가 c보다 크거나 같은지, a가 b보다 작거나 같은지, b가 c보다 작은지를 비교하여 참이면 1, 거짓이면 0을 각각 출력하는 프로그램을 작성하시오. 

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b) {
        printf("1"); 
    } else {
        printf("0");
    }

    printf(" ");

    if(b >= c) {
        printf("1");
    } else {
        printf("0");
    }

    printf(" ");

    if(a <= b) {
        printf("1");
    } else {
        printf("0");
    }

    printf(" ");

    if(b < c) {
        printf("1");
    } else {
        printf("0");
    }
}