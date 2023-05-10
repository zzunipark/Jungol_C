// 9080 : 배열2 - 연습문제7
// 아래와 같은 파스칼 삼각형을 출력하는 프로그램을 작성하시오. 파스칼 삼각형은 첫 번째 줄 첫 번째 행을 1로 초기화한 후 다음 줄부터는 바로 위의 값과 바로 위 왼쪽의 값을 더한 값이 된다. 

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int i, j;
    int arr[6][6] = { 0 };
    arr[1][1] = 1;

    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }

    for(i = 1; i < 6; i++) {
        for (j = 1; j <= i; j++) {
            printf("%2d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}