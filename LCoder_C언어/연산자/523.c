// 523 : 연산자 - 자가진단6
/*
    두 개의 정수를 입력받아서 다음과 같이 4가지 관계연산자의 결과를 출력하시오.
    이때 입력받은 두 정수를 이용하여 출력하시오.
    (JAVA는 1이면 true, 0이면 false를 출력한다.)
*/
/*
    출력 예 :
    4 > 5 --- 0
    4 < 5 --- 1
    4 >= 5 --- 0
    4 <= 5 --- 1
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b) {
        printf("%d > %d --- 1", a, b);
    } else {
        printf("%d > %d --- 0", a, b);
    }

    printf("\n");

    if(a < b) {
        printf("%d < %d --- 1", a, b);
    } else {
        printf("%d < %d --- 0", a, b);
    }

    printf("\n");

    if(a >= b) {
        printf("%d >= %d --- 1", a, b);
    } else {
        printf("%d >= %d --- 0", a, b);
    }

    printf("\n");

    if(a <= b) {
        printf("%d <= %d --- 1", a, b);
    } else {
        printf("%d <= %d --- 0", a, b);
    }
}