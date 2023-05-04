// 9021 : 연산자 - 연습문제3
// 정수형 변수 a와 b를 만들고 각각 10으로 초기화한 후 다음과 같이 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    int a = 10;
    int b = 10;

    printf("최초값 a = %d, b = %d\n\n", a, b);

    ++b;
    printf("a++ = %d, ++b = %d\n", a, b);
    a++;
    printf("실행후 a = %d, b = %d\n\n", a, b);

    --b;
    printf("a-- = %d, --b = %d\n", a, b);
    a--;
    printf("실행후 a = %d, b = %d\n", a, b);

    return 0;
}