// 122 : 선택제어문 - 형성평가3 
// 년도를 입력받아 윤년(leap year)인지 평년(common year)인지 판단하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int year;

    scanf("%d", &year);
    if (year%400 == 0) {
        printf("leap year");
    } else if (year%4 == 0) {
        if (year%100 != 0) {
            printf("leap year");
        } else {
            printf("common year");
        }
    } else {
        printf("common year");
    }
}