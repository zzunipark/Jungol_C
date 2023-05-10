// 133 : 반복제어문2 - 형성평가4
// 100 이하의 자연수 n을 입력받고 n개의 정수를 입력받아 평균을 출력하는 프로그램을 작성하시오. 
// (평균은 반올림하여 소수 둘째자리까지 출력하도록 한다.)

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, num;
    float sum=0;

    scanf("%d", &a);
    if(a>100 && a<=0) {
        return 0;
    }

    for(int i=1; i<=a; i++) {
        scanf("%d", &num);
        sum=sum+num;
    }
    printf("%.2lf", sum/a);
}