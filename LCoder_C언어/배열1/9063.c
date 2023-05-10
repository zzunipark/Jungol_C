// 9063 : 배열1 - 연습문제1-1
// 5개의 정수를 입력받은 후 차례로 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int i, num, arr[5];
    for(i = 0; i < 5; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }
    for(i = 0; i< 5; i++) {
        printf("%d ", arr[i]);
    }
}