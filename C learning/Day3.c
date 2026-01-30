//컴파일러가 코드를 해석할 때 위에서부터 아래로 해석함//
//그래서 Day2 에서는 sum 함수를 main 함수 위에 선언해서 main 함수에서 sum 함수를 불러올 수 있게 함//
//근데 만약 함수가 서로를 호출하는 경우에는 뭘 먼저 쓰든 에러가 날 수 있다 (함수를 알아야지 계산을 하는데 앞에는 그런 함수가 없어서)//
//그래서 앞에 함수 원형을 선언해야된다//

#include <stdio.h>

int sum (int, int); //함수 원형 선언, 뒤에 이런 함수가 나온다고 먼저 알려줌//
//함수 원형에는 매개변수 이름을 안 적어도 된다//

int main ()
{
    int value, a=3, b=7;
    value = sum (a,b); 
    printf ("%d\n", value);
    return 0;
}

int sum(int value1, int value2) 
{
    int result = value1 + value2;
    return result;
}


