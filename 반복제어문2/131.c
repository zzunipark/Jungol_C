// 131 : 반복제어문2 - 형성평가2
// 100 이하의 두 개의 정수를 입력받아 작은 수부터 큰 수까지 차례대로 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, b, temp;

    scanf("%d%d", &a, &b);

    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    for(; a<=b; a++) {
        printf("%d ", a);
    }
}