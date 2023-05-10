// 9018 : 연산자 - 연습문제1
// 두 개의 정수를 입력받아 다음과 같이 출력하는 프로그램을 작성하시오. 

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, b;
    printf("두 개의 수를 입력하시오. ");
    scanf("%d%d", &a, &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d\n", a, b, a%b);

    return 0;
}