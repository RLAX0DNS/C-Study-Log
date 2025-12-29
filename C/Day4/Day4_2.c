// define 전처리기: define a b 이렇게 쓰면 a 를 b 로 치환하다는 뜻//
#define power(a) (a*a)
//여기서는 power(a) 라는 함수를 (a*a) 라는 계산법으로 치환한다는 뜻//

# include <stdio.h>

int main ()
{
    int data = power(2);
    printf ("%d\n", data);
    return 0;
}