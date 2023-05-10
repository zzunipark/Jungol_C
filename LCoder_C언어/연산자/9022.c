// 9022 : 연산자 - 연습문제4
/*
    정수 변수 a와 b를 입력받아서 a는 전치 증가 연산자를 사용하고, b는 후치 감소 연산자를 사용하여 
    두 수의 합을 c에 저장한 후 각각을 출력하는 프로그램을 작성하시오. 
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    ++a, c = a + b, b--;

    printf("a = %d, b = %d, c = %d", a, b, c);
}