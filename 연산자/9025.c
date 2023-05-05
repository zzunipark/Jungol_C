// 9025 : 연산자 - 연습문제7
// 3개의 정수 a, b, c를 선언하여 각각 0, 1, 2로 초기화한 후 a와 b가 모두 참인지, a 또는 b가 참인지, b와 c가 모두 참인지, a가 참이 아닌지를 확인하여 참이면 1, 거짓이면 0을 각각 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a = 0, b = 1, c = 2;

    if (a >= 1 && b >= 2) {
		printf("1 ");
	}
	else {
		printf("0 ");
	}

	if (a >= 1 || b >= 1) {
		printf("1 ");
	}
	else {
		printf("0 ");
	}

	if (b >= 1 && c >= 1) {
		printf("1 ");
	}
	else {
		printf("0 ");
	}

	if (a >= 1) {
		printf("0 ");
	}
	else {
		printf("1 ");
	}
}