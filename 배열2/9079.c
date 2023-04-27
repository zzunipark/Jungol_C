// 9079 : 배열2 - 연습문제6
/*
학생 3명의 국어, 영어, 수학 점수를 입력받아 학생별 총점과 과목별 합계를 아래와 같이 출력하는 프로그램을 작성하시오.
 
- 참고사항-
첫 줄의 "국어" 앞에 공백 5칸
예) printf("     국어 영어 수학 총점\n");
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int a[4][4] = { 0 };

    for (int i = 0; i < 3; i++) {
        printf("%d 번째 학생의 점수 ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            a[i][3] += a[i][j];
            a[3][j] += a[i][j];
            a[3][3] += a[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}