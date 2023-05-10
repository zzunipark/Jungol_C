// 570 : 배열2 - 자가진단7
/*
배열을 만들어서 아래와 같이 저장한 후 출력하는 프로그램을 작성하시오.

규칙은 첫 번째 행은 모두 1로 초기화 하고 다음 행부터는 바로 위의 값과 바로 왼쪽의 값을 더한 것이다.
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int pas[6][6] = { {0}, {0, 1, 1, 1, 1, 1} };
    int i, j;
    
    for(i = 2; i < 6; i++) {
        for(j = 1; j < 6; j++)  {
            pas[i][j] = pas[i][j - 1] + pas[i - 1][j];
        }
    }

    for(i = 1; i < 6; i++) {
        for(j = 1; j < 6; j++) {
            printf("%3d ", pas[i][j]);
        }
        printf("\n");
    }

    return 0;
}