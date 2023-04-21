// 130 : 반복제어문2 - 형성평가1
// 10 이하의 자연수 n을 입력받아 "JUNGOL​"을 n번 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a;

    scanf("%d", &a);
    for(int i=a; i>0; i--) {
        printf("JUNGOL\n");
    }
}