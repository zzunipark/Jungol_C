// 132 : 반복제어문2 - 형성평가3
// 정수를 입력받아서 1부터 입력받은 정수까지의 5의 배수의 합을 구하여 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int num, sum = 0;

    scanf("%d", &num);

    for(int i=1;i<=num;i++) {
        if(i%5==0){
			sum=sum+i;
		}
    }

    printf("%d", sum);
}