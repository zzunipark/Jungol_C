// 125 : 반복제어문1 - 형성평가1
// 정수를 입력받아 1부터 입력받은 정수까지를 차례대로 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int num, i;
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        printf("%d ", i);
    }

    return 0;
}