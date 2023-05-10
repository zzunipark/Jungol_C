// 165 : 배열2 - 형성평가6
// 예제를 보고 적당한 배열을 선언한 후 1행의 1열과 3열 5열을 각각 1로 초기화하고 나머지는 모두 0으로 초기화 한 후 2행부터는 바로 위행의 왼쪽과 오른쪽의 값을 더하여 채운 후 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {	
	int arr[6][6] = { 0 };
	int i,j;
	
	for(i = 1; i < 6; i += 2) {
        arr[1][i] = 1;
    }
	
	for(i = 2; i < 6; i++) {
		for(j = 1; j < 6; j++) {
			arr[i][j] = arr[i-1][j-1]+arr[i-1][j+1];
		}
	}
	
	for(i = 1; i < 6; i++) {
		for(j = 1; j < 6; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}