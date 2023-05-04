// 520 : 연산자 - 자가진단3
// 한 개의 정수를 입력 받아서 후치증가 연산자를 사용하여 출력한 후 전치 증가 연산자를 사용하여 출력하는프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n++);
    printf("%d", ++n);
}