#include <stdio.h>
#include "shared.h" 
//큰 다옴표 안에 넣는 헤더파일을 넣으면 그 실행파일이 있는 폴더에서부터 헤더파일을 찾는다//

int minus (int num1, int num2);

int main(){
    value1=3;
    value2=6;
    int result1;
    result1=sum(value1, value2); 
    //헤더파일안에 있는 함수는 그냥 이렇게 함수 원형 선언 없이 써도 된다//

    printf ("%d\n", result1);

    int result2; 
    result2 = minus(6, 1);
    printf ("%d\n", result2);

    return 0;
}
//cd "/Users/rlaxodns/Library/Mobile Documents/com~apple~CloudDocs/4. 학교 외 기타/코딩/C/Day15/shared" && gcc linking.c provider.c -o linking && ./linking//
//컴파일 할 때 위에 코드로 해야됨//
//안 그러면 provider.c 에 있는 minus 함수를 못 불러옴//


