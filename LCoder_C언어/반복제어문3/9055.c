// 9055 : 반복제어문3 - 연습문제1
// 1부터 차례로 누적하여 합을 구하다가 합이 입력받은 수를 넘으면 중단하고 마지막으로 더해진 값과 그 때까지의 합을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int i = 0, j = 0;

    while (1) {
        i++;
        j += i;
        if (j > 1000) {
            printf("%d %d", i, j);
            return 0;
        }
    }
}