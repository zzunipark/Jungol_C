// 9020 : 연산자 - 연습문제2-2
// 5개의 정수를 입력 받아 각각의 수에 + 3, - 3, × 3, / 3, % 3의 연산을 실행하여 그 값을 저장한 후 차례대로 출력하는 프로그램을 작성하시오 ​

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, b, c, d, e;
    printf("5개의 수를 입력하시오. ");
    scanf("%d%d%d%d%d", &a, &b, &c ,&d ,&e);

    printf("%d %d %d %d %d", a+3, b-3, c*3, d/3, e%3);

    return 0;
}