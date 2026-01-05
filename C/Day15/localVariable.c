#include <stdio.h>

//지역변수//
//한 함수 안에서만 쓰이는 변수//

int sum(int value1, int value2) {
    int result;
    printf("숫자1 과 숫자 2 를 입력하세요");
    scanf("%d%d",&value1, &value2);
    result = value1 + value2;
    printf ("결과는 %d 입니다", result);
    return result;
}

int main(){
    int a=0, b=0;
    sum(a,b);
}
//위처럼 함수 안에 쓰는 매개변수들 (value1, value2, result, a, b) 는 다 지역함수//