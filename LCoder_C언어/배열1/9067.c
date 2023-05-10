// 9067 : 배열1 - 연습문제3
// 정수 10개를 입력받은 후 세 번째, 다섯 번째와 마지막으로 입력받은 정수를 차례로 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main() {
    int i, num;
    int arr[10];

    for(i = 0; i < 10; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }
    printf("%d %d %d", arr[2], arr[4], arr[9]);
}