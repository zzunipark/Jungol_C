// 134 : 반복제어문2 - 형성평가5
// 10개의 정수를 입력받아 입력받은 수들 중 짝수의 개수와 홀수의 개수를 각각 구하여 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, holsu = 0, jjaksu = 0;

    for(int i=0;i<10;i++) {
        scanf("%d", &a);
        if(a%2 == 0) {
            jjaksu++;
        } else {
            holsu++;
        }
    }
    printf("even : %d\nodd : %d", jjaksu, holsu);
}