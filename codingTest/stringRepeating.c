/*
문자열 str과 정수 n이 주어집니다.
str이 n번 반복된 문자열을 만들어 출력하는 코드를 작성해 보세요.

제한사항
1 ≤ str의 길이 ≤ 10
1 ≤ n ≤ 5
*/

#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);
    for (int n =0; n<a; n++){ 
        //a-- 를 반복하다가 값이 0이 되면 break 기 때문에 여기에 그냥 for (;a--;) 로 해도 됨. 이렇게 되면 속도가 더 빠름
        printf ("%s", s1);
    }

    return 0;
}
