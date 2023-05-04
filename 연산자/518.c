// 518 : 연산자 - 자가진단1
// 세 개의 정수를 입력 받아서 합계와 평균을 출력하시오. (단 평균은 소수 이하를 버리고 정수부분만 출력한다.)

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, b, c, avg = 0, sum = 0;
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    avg = (a + b + c) / 3;

    printf("sum : %d\navg : %d", sum, avg);
}