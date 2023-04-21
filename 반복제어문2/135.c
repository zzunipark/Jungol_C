// 135 : 반복제어문2 - 형성평가6
// 두 개의 정수를 입력받아 두 정수 사이(두 정수를 포함)에 3의 배수이거나 5의 배수인 수들의 합과 평균을 출력하는 프로그램을 작성하시오.
// (평균은 반올림하여 소수 첫째자리까지 출력한다.)

#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    int a = 0;
    int b = 0;
    int i = 0;
    int temp;
    double sum = 0;

    scanf("%d%d", &a, &b);

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    for (i = 0; a <= b; a++) {
        if (a % 3 == 0 || a % 5 == 0)
        {
            sum += a;
            i++;
        }
    }

    printf("sum : %d\navg : %.1lf", sum, sum/i);
}