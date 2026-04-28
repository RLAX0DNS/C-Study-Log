// 연산자!!

// 연산자에 대해서는 너무 당연해서 따로 기록하지 않았는데 코테를 하면서 연산자의 중요성을 느끼게 되었다. 그래서 이 파일을 만들었다

// 일단 이 파일을 실행시키는건 권장되지 않는다!!
// 만약 꼭 파일을 실행해야된다면 꼭 필요 없는 부분은 주석 처리하고 실행할 것!!

#include <stdio.h>

int main()
{
    int a = 325, b = 108; // int 는 4바이트; double 은 8바이트 (더 안정적); long double 16비아트

    // 기본적인 사칙연산!!
    int resultPlus = a + b;     // 덧샘
    int resultMinus = a - b;    // 뺄샘
    int resultMulti = a * b;    // 곱샘
    int resultDivision = a / b; // 나눗샘  //몫만 반환
    int resultRemain = a % b;   // 머지 연산!! 나눗샘의 나머지를 보여주는 연산  //만약 5%3 연산을 하면 결과값은 2

    int d = 124, c = 918;

    // 복합 대입 연산!!
    a += 3; // a = a + 3
    a -= 2; // a = a - 2
    a *= 4; // a = a * 4
    a /= 2; // a = a / 2
    a %= 3; // a = a % 3

    // 삼항연산!!
    int x = (a > b) ? a - 1 : b - 1;
    printf("a 는 %d, b 는%d, x 는 %d", a, b, x);
    // 삼항연산의 형식: "조건 ? 식1 : 식2"
    /*삼항연산의 로직은 if else 와 같음
        if (조건)
            결과 = 값1;
        else
            결과 = 값2;*/

    return 0;
}
