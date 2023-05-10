// 9043 : 반복제어문1 - 연습문제5-1
// 정수를 계속 입력 받다가 0이 입력되면 입력된 수중 홀수의 합과 평균을 출력하는 프로그램을 작성하시오. (정수 미만은 버림)

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num = 0;
	int count = 0;
	int sum = 0;
	int avg = 0;

	scanf("%d", &num);

	while (1) {
		if (num % 2 == 0) {
			count--;
			sum -= num;
		}

		if (num == 0) {
			printf("Ȧ���� �� = %d\n", sum);
			printf("Ȧ���� ��� = %d\n", avg);
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