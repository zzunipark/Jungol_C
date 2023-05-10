// 9074 : 배열2 - 연습문제1
// 1부터 10까지의 정수를 입력받다가 입력된 정수가 범위를 벗어나면 그 때까지 1번 이상 입력된 각 숫자의 개수를 작은 수부터 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int arr[11] = { 0 };
    int n, i;
    while (1) {
        scanf("%d", &n);
        if(n < 1 || n > 10) {
            break;
        }
        arr[n]++;
    }
    for(i = 1; i < 11; i++) {
        if(arr[i] != 0) {
            printf("%d : %d개\n", i, arr[i]);
        }
    }
}