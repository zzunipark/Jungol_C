// 9041 : 반복제어문1 - 연습문제3
// 점수를 입력받아 80점 이상이면 합격메시지를 그렇지 않으면 불합격 메시지를 출력하는 작업을 반복하다가 0~100점 이외의 점수가 입력되면 종료하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int score;
    
    while(1) {
        printf("\n������ �Է��ϼ���. ");
        scanf("%d", &score);

        if(score >= 80 && score <= 100) {
            printf("�����մϴ�. �հ��Դϴ�.");
        } else if(score < 80 && score >= 0) {
            printf("�˼��մϴ�. ���հ��Դϴ�.");
        } else {
            break;
        }
    }

    return 0;
}