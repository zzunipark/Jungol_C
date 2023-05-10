// 9071 : 배열1 - 연습문제7
// 4자리 이하의 10개의 정수를 입력받아 짝수 중 가장 큰 값과 홀수 중 가장 작은 값을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a[10] = { 0 };
    int i;
    int min = 1000;
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (min>a[i]) {
            min = a[i];
        }
    }
    
    printf("%d", min);

    return 0;
}