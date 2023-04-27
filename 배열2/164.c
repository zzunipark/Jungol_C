// 164 : 배열2 - 형성평가5
/*
호석이네 학교는 6학년이 네 반이 있는데 각 반의 대표를 세 명씩 선발하여 제기차기 시합을 하였다. 
반별로 세 명이 제기를 찬 개수를 입력받아 각 반별로 제기를 찬 개수의 합계를 출력하는 프로그램을 작성하시오.
(반드시 배열을 이용하고 입력후에 출력하는 방식으로 하세요.)
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int stu[4][4] = { 0 };
    int i, j;

    for(i = 0; i < 4; i++) {
        printf("%dclass? ", i + 1);
        for(j = 0; j < 3; j++) {
            scanf("%d", &stu[i][j]);
            stu[i][3] += stu[i][j];
        }
    }

    printf("\n");

    for(i = 0; i < 4; i++) {
        printf("%dclass : ", i + 1);
        printf("%3d", stu[i][3]);
        printf("\n");
    }
}