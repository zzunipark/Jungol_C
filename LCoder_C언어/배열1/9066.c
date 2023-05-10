// 9066 : 배열1 - 연습문제2
// 26개의 문자배열을 선언하고 'A'부터 'Z'까지의 대문자를 차례로 대입 시킨 후 배열의 마지막부터 처음까지 각 문자를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    char arr[26];
    int i;

    for(i = 0; i < 26; i++) {
        arr[i] = 65 + i;
    }
    for(i = 25; i >= 0; i--) {
        printf("%c ", arr[i]);
    }
}