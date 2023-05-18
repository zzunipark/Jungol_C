// 1658 : 최대공약수와최소공배수
// 두개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

/*
입력 파일의 첫째 줄에는 두 개의 자연수가 주어진다.
이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.
*/

// 첫째 줄에는 입력으로 주어진 두 수의 최대공약수를 둘째 줄에는 입력으로 주어진 두 수의 최소 공배수를 출력한다.

#include <stdio.h>
#pragma warning(disable:4996)

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int gcdResult = gcd(a, b);
    int lcmResult = lcm(a, b);

    printf("%d\n%d\n", gcdResult, lcmResult);

    return 0;
}
