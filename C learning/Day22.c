#include <stdio.h>

int main () {
    //일반 변수에 어떤 변수의 주소를 저장할 수 있지만 그 주소에 있는 값을 읽을 수 없기 때문에 기능이 없음
    //int data = 4;
    //int ptr = (int)&data; //여기서 경고 발생. data 의 주소는 (int*) 타입인데 강제로 int 타입으로 바꿔서. 근데 포인터 크기 > int 크기 인 환경이라는 것
    //printf ("data 의 주소는: %d\n", ptr);
    //printf ("data 에 있는 값은: %d", *ptr); 이건 불가능. ptr 이 포인터가 아니기 때문에 *ptr 이 작동하지 않음 

    //다차원 포인터!!
    int *p;
    printf ("size of pointer p is %zu\n", sizeof(p));
    //sizeof 함수는 size_t (unsigned long int) 전용 서식 지정자를 사용한다. 그래서 %zu 사용해야됨. %d 는 int 전용. 
    //이 컴퓨터에서는 주소를 8바이트에 저장함. long 타입 

    int value = 117;
    int *p1 = &value;
    int **p2 = &p1;
    int ***pt = &p2;
    printf("the value of value is %d \n", **p2);
    //여기서 **p2 은 *(*p2) 과 같다. (*p2) 은 포인터 p2 안에 저장되있는 주소를 의미하고, 그 주소로 가서 값을 읽는걸 *(*p2)
    printf ("the value of value is %d \n", ***pt);
    //이렇게 하면 ***pt == **p2 == *p1 == value 라고 쓸 수 있음 

    //물론 다차원 포인터를 사용하지 않고 1차원 포인터들 끼리 서로를 reference 할 수도 있음 
/*
    int *ptr1, *ptr2, data;
    data=325;
    ptr1 = &data;
    ptr2 = (long*)&ptr1; <-- 이 부분이 안전하지 않아용 
    printf ("%d\n", *ptr1);
*/
    //이 코드는 컴파일될 수 있으나 안전하지 않음. 그냥 쓰지 않는게 좋음 
    //GPT 왈 이거는 그냥 책에서 1차원 포인터들끼리의 참조를 보여주려고 든 예시, 실제 활용 강력하게 비추천 

    //뒤에 무슨 2차원 포인터랑 2차원 배열에 관해서 나왔는데 진짜 이해가 안되서 따로 정리는 못 했어요...
    //GPT 물어보고 youtube 찾아보고 다른 AI 들도 써봤는데 도저히 이해가... 
    //나중에 책 한번 다시 읽을 때 이해되면 보충하는걸로 

    return 0;
}