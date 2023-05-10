// 9042 : 반복제어문1 - 연습문제4
// 정수를 계속 입력을 받다가 0이 입력되면 0을 제외하고 이전에 입력된 자료의 수와 합계, 평균을 출력하는 프로그램을 작성하시오. (평균은 반올림하여 소수 둘째자리까지 출력한다.)

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int num=0, count=0, sum = 0;
    float avg=0;

    scanf("%d", &num);

    while (1) {
        if (num == 0) {
            printf("�Էµ� �ڷ��� ���� = %d\n", count);
            printf("�Էµ� �ڷ��� �հ� = %d\n", sum);
            printf("�Էµ� �ڷ��� ��� = %.2f\n", avg);
            return 0;
        }
        else {
            count++;
            sum += num;
            avg = sum;
            avg /= count;
        }

        scanf("%d", &num);
    }

    return 0;
}