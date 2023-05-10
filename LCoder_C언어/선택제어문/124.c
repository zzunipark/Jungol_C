// 124 : 선택제어문 - 형성평가5
// 1~12사이의 정수를 입력받아 평년의 경우 입력받은 월의 날수를 출력하는 프로그램을 작성하시오.

// 평년의 경우 1월부터 12월까지 일수는 각각 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31일이다.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int month;

    scanf("%d", &month);
    switch(month) {
        case 1:
        printf("31");
        break;

        case 2:
        printf("28");
        break;

        case 3:
        printf("31");
        break;

        case 4:
        printf("30");
        break;

        case 5:
        printf("31");
        break;

        case 6:
        printf("30");
        break;

        case 7:
        printf("31");
        break;

        case 8:
        printf("31");
        break;

        case 9:
        printf("30");
        break;

        case 10:
        printf("31");
        break;

        case 11:
        printf("30");
        break;

        case 12:
        printf("31");
        break;
    }
}