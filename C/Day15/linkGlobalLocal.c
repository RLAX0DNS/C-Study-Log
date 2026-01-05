#include <stdio.h>

extern int value1;
extern int value2;
extern int result;
//globalVariable.c 에서 선언한 함수를 갖고오는 작업//
//extern 키워드 사용법: "extern 타입 변수"//

extern int data;
//이렇게 다른 파일에 없는 선언을 extern 키워드로 불러오면 컴파일러가 data 를 찾을 수 없어서 에러가 뜸//

extern int data = 0;
//근데 이렇게 extern 뒤에 오는 변수에 값을 주면 다른 파일에서 선언이 안 됐어도 이 함수에서 선언이 되서 에러는 안 뜸//
//근데 굳이 이렇게 쓰면 실행 속도가 느려짐//

extern int hidden;

int sum();

int main () {
    scanf ("%d%d",&value1, &value2);
    result =  sum();
    printf ("%d", result);
}

//gcc linkGlobalLocal.c globalVariable.c localVariable.c -o linkGlobalLocal./linkGlobalLocal//
//컴파일 할 때 이렇게 필요한 파일들을 다 묶어서 하기//
