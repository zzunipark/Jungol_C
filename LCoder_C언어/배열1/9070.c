// 9070 : 배열1 - 연습문제6
// 10개의 자연수를 입력받아 그 중 가장 큰 수를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int arr[10] = { 0 };
    int max = 0;
    int i;

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i ++) {
        if(arr[i] > max) {
            max = arr[i];
        } else {
            continue;
        }
    }

    printf("%d", max);
}