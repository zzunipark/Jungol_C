// 121 : 선택제어문 - 형성평가2
// 정수를 입력받아 0 이면 "zero" 양수이면 "plus" 음수이면 "minus" 라고 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a;

    scanf("%d", &a);

    if (a == 0) {
        printf("zero");
    } else if (a > 0) {
        printf("plus");
    } else if (a < 0) {
        printf("minus");
    }

    return 0;
}