// 9038 : 선택제어문 - 연습문제9
// 두 개의 정수를 입력받아 조건연산자를 이용하여 두 수중 큰 수를 출력하는 프로그램을 작성하시오. 

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	if (a > b) {
		printf("%d", a);
	}
	else {
		printf("%d", b);
	}

	return 0;
}