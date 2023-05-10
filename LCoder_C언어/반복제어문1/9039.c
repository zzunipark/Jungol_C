// 9039 : 반복제어문1 - 연습문제1
// 알파벳 'A'부터 'Z'까지 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    char az = 'A';

    while (az <= 'Z') {
        printf("%c", az++);
    }

    return 0;
}