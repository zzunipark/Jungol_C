// 120 : 선택제어문 - 형성평가1 
// 두 개의 정수를 입력받아 큰 수에서 작은 수를 뺀 차를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, b = 0;
    scanf("%d%d", &a, &b);

    if(a > b) {
        printf("%d", a-b);
    } else if (b>a) {
        printf("%d", b-a);
    }

    return 0;
}