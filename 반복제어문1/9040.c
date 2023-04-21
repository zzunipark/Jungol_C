// 9040 : 반복제어문1 - 연습문제2
// 정수 변수 num을 선언하여 1을 대입한 후 1씩 증가시키면서 10까지의 누적 합을 구하는 프로그램을 while문을 이용하여 작성하고, 1부터 10까지의 합과 while문이 끝난 후의 num의 값을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int num = 1;
    int count = 0;
    while (num <=10) {
        count += num;
        num = num + 1;
    }

    printf("1부터 10까지의 합 = %d\n", count);
    printf("while문이 끝난 후의 num의 값 = %d", num);
}