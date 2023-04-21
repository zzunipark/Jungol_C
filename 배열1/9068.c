// 9068 : 배열1 - 연습문제4
// 최대 100개까지의 정수를 차례로 입력받다가 0이 입력되면 입력을 중단하고 짝수 번째에 입력된 정수를 모두 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
    int number[100];
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &number[i]);
        if (number[i] == 0)
            break;
    }
    for (int j = 0; j < 100; j++)
    {
        j++;
        if (number[j] == 0)
        {
            break;
        }
        else
            printf("%d ", number[j]);
    }
    return 0;
}

// 11 25 3 9 15 6 8 7 12 0