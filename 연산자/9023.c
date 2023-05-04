// 9023 : 연산자 - 연습문제5
// 3개의 정수 a, b, c를 입력받아서 a와 b, b와 c를 각각 비교하여 같으면 1, 같지 않으면 0을 출력하고, 다음에는 같지 않으면 1, 같으면 0을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(b == c) {
        printf("1");
    } else {
        printf("0");
    }
}