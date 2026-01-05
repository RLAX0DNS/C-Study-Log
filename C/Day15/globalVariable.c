//전역변수는 코드 파일안에 있는 모든 함수에 적용되는 변수//
//모든 함수 밖에 쓰면 그게 전역함수가 됨//
//이 코드에서는 value1 value2 result 가 전역변수임//

#include <stdio.h>

int value1=0;
int value2=0;
int result;

static int hidden = 19;
//이렇게 static 키워드를 앞에 붙이면 이 변수는 전역변수로 선언이 되었어도 다른 파일에서 불러올 수 없음//
//이렇게 되면 그냥 이 파일에서만 쓸 수 있는 전역변수가 됨//

int sum () {
    result = value1 + value2;
    return result;
}

/*
int main () {
    value1=4;
    value2=5;
    int resultM = sum();
    printf ("%d", resultM); 
}
*/


//command + / 키 == 선택된 줄들 앞에 "//" 추가
//반대로 이미 "//" 가 있는 줄들을 선택하고 똑같은걸 하면 "//" 들이 다 사라짐