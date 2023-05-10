// 522 : 연산자 - 자가진단5
/*
    두 개의 정수를 입력받아서, 
    첫 번째 줄에는 두 정수의 값이 같으면 1 아니면 0을 출력하고, 
    두 번째 줄에는 같지 않으면 1 같으면 0을 출력하는 프로그램을 작성하시오.
 
    (JAVA는 1이면 true, 0이면 false를 출력한다.)
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if(a == b) {
        printf("1");
    } else {
        printf("0");
    }

    printf("\n");

    if(a != b) {
        printf("1");
    } else {
        printf("0");
    }
}