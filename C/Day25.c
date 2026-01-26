#include <stdio.h>

int sum (int a, int b){
    int result = 0;
    result = a +b;
    return result;
}

int sub (int a, int b){
    int result =0;
    result = a-b;
    return result; 
}

int mul (int a, int b){
    int result = 0; 
    result = a*b;
    return result;
}

int div(int a, int b){
    int result = 0;
    result = a/b;
    return result; 
}

int main () {
    //함수 포인터!!
    //함수도 기계어로 번역되면 결국에는 램 어딘가에 저장됨
    //그러면 함수도 어떤 주소를 배정받아 그 주소를 불러옴으로써 함수를 호출 할 수 있게 됨 

    int (*pt) (int, int);
    //함수 포인터 선언하기!! "함수의 반환형 (*포인터이름)(매개변수들);"

    pt = &sum;
    //이렇게 일단 퐁니터를 선언하고 나중에 함수의 주소를 정해줘야됨. 

    int result1 = pt(2,5);
    int result2 = (*pt)(3,6); 
    //이렇게 해서 함수의 리턴 값을 변수에 저장할 수 있음 
    //"포인터(변수에 대입할 값)" 아니면 "(*포인터)(변수에 대입할 값)"

    printf ("%d\n%d\n", result1, result2);

    int (*pointer[4])(int, int) = { sum, sub, mul, div };
    //이렇게 포인터라는 포인터로 내가 호출하려는 함수들을 구룹으로 정리해 관리할 수 잇음 
    //이렇게 하면 pointer[0] = sum; pointer[1] = sub; pointer[2] = mul; pointer[3] = div; 이런게 선언됨 

    int result[4], i;
    for (i = 0; i<3; i++){
        result[i] = (*pointer[i])(4,8);
        printf ("%d\n", result[i]);
    }
    //반복문을 사용해서 4와 8에 대해서 이 둘의 연산을 시킨 후 결과를 출력 

    return 0;
}