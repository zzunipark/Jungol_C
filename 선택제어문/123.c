// 123 : 선택제어문 - 형성평가4
/*
1번은 개, 2번은 고양이, 3번은 병아리로 정하고 번호를 입력하면 번호에 해당하는 동물을 영어로 출력하는 프로그램을 작성하시오.
해당 번호가 없으면 "I don't know."라고 출력한다.
개-dog
고양이-cat
병아리-chick​ 
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a;

    printf("Number? ");
    scanf("%d", &a);

    switch(a) {
        case 1:
        printf("dog");
        break;

        case 2:
        printf("cat");
        break;

        case 3:
        printf("chick");
        break;

        default:
        printf("I don't know.");
        break;
    }

    return 0;
}