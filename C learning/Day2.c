#include <stdio.h>

int sum(int value1, int value2) //이 소괄호 안에는 매개변수를 지정할 수 있음.매개함수 정의할 때는 문자 타입이랑 이름 정의.//
{
    int result = value1 + value2;
    return result;
}
//sum 이라는 함수를 만들어줌. 어떤 함수인지 정의함//

int main ()  //근데 모든 함수가 매개변수를 사용하는게 아니라서 매개변수가 없는 함수는 그냥 비워두면 됨.//
{
    int value, a=3, b=7;
    value = sum (a,b); //sum 함수를 main 함수 안으로 "호출" 해서 계산 함// 
    printf ("%d\n", value);
    return 0;
}
//호출하는 함수(main)는 호출자 caller, 호출 당하는 함수(sum)는 피호출자 callee//

//모든 매개변수는 각 함수 안에서만 사용 가능//
//sum 함수에서 정의한 value1, value2 는 sum 함수에서만 사용 가능//
//main 함수 안에서 정의 안 한 value1, value2 는 사용 불가//
//근데 두개의 다른 함수에서 같은 문자로 매개변수 지정 가능//