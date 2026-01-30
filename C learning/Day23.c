#include <stdio.h> 
#include <stdlib.h> 

int main () {
    typedef unsigned short int USI; 
    //typedef 함수는 (type define) 기존 자료형을 다른 자료형으로 정의할 수 있는 함수
    //사용법! "typedef 기존자료형 새자료형"

    typedef int arr[4];
    //이렇게 하면 int 형 요소 4개 짜리 배열을 선언할 때 "arr 변수이름" 만 써도 새로운 길이가 4인 배열을 선언할 수 있게 함 

    arr temp = {1,2,3,4};
    //이거는 int temp[4] = {1,2,3,4} 와 같음 
    printf ("%d\n", temp[3]);

    //구조체!!!
    //구조체는 배열과 비슷한 계념. 배열은 같은 자료형의 요소들을 묶어놓은거. 구조체는 내가 원하는 자료형의 다른 변수들을 모아놓은 묶음 
    struct human{
        char name[10];
        int age;
        char gender;
    };
    /*
    구조체 의 선언 방법!! 
    struct 구조체이름 {
        자료형 변수1;
        자료형 변수2;
        자료형 변수 3;
        ...
    };
    */
    //구조체의 크기는 구조체의 변수의 자료형의 크기의 합
    //위 human 구조체는 총 1*10 + 2 + 1 = 13 바이트 짜리힘
    
    //이렇게 만든 구조체로 변수를 선언할 수 있음 
    struct human alan; 
    //이렇게 하면 int name[10], int age, char gender 가 다 들어있는 alan 이라는 변수가 만들어짐 

    typedef struct human person;
    //이렇게 하면 person 이라는 키워드로도 struct human 이라는 구조체를 선언할 수 있음 
    person kim;
    //이렇게 하면 kim 이라는 struct human 변수가 생김 

    typedef struct guy{
        int height;
        int age;
    } man;
    //이렇게 typedef 랑 구조체 선언을 같이 해서 man 이라는 키워드로만 struct type 를 선언할 수 있게 설정 가능 

    typedef struct{
        int physics;
        int english;
        int math;
    } score;
    //이렇게 맨 위에 구조체 이름을 생략한 뒤에 typedef 을 그냥 사용해서 score 를 만들 수 있음 

    score student[10];
    //이렇게 선언해서 student 라는 구조체 10개를 배열의 형태로 만들 수 있음 

    //구조체의 특정 한 변수를 사용할 때는 "구조체이름.변수이름" 하면 됨
    student[0].physics = 7;
    printf("태운 물리 성적: %d\n", student[0].physics);

    //구조체를 가르키는 포인터를 만들려면 
    score *p; //struct score 라는 형식으로 선언한 메모리에 접근할 수 있는 포인터를 선언 
    p=&student[0]; //그 포인터에 student[0] 의 주소값을 저장 
    (*p).math = 7; //포인터로 student[0] 의 주소로 가서 값을 읽으라고 시킴 
    //근데 . 연산자의 우선순위가 * 보다 높아서 괄호를 써줘야됨 
    //만약 괄호를 붙이고 별을 쓰고 점을 쓰는게 귀찮으면 
    score *pt;
    pt = &student[0];
    pt -> english =7; //이게 (*pt).english = 7 과 같음 

    printf("태운 수학 성적: %d\n태운 영어 성적: %d\n", student[0].math, student[0].english);

/*
구조체 정렬 설명!!!,

struct Test {
    char   a;   // 1바이트
    double b;   // 8바이트
    short  c;   // 2바이트
    char   d;   // 1바이트
};

1) 구조체 멤버는 각 타입의 "정렬 단위" 주소에서 시작해야 한다.
   - char   : 1바이트 정렬 (아무 주소나 가능)
   - short  : 2바이트 정렬
   - double : 8바이트 정렬

2) char a 는 1바이트이므로 바로 배치된다.
   -> 주소 0에 저장됨

3) 다음 멤버 double b 는 8바이트 정렬이 필요하다.
   -> 현재 위치는 주소 1이므로 사용할 수 없음
   -> 주소 8까지 7바이트 패딩(padding)이 삽입됨
   -> 그래서 char a 가 혼자 떨어져 있는 것처럼 보인다.

4) short c 는 2바이트 정렬이므로 주소 16에 바로 배치된다.

5) char d 는 1바이트 정렬이므로 바로 배치된다.

6) 구조체 전체 크기도 가장 큰 정렬 단위의 배수여야 한다.
   -> double 때문에 구조체 전체 크기는 8의 배수
   -> 실제 데이터는 19바이트지만, 24바이트로 맞춰진다.

결론:
- 첫 1바이트가 따로 있는 이유는 double의 8바이트 정렬 때문이다.
- 이 현상은 컴파일러가 자동으로 패딩을 넣어서 발생한다.
    written by chatGPT 
*/
    //위 부분은 do it 책의 479 페이지 보면 좀 더 잘 이해할 수 있게 됨 
    //대부분 컴파일러는 8바이트 정렬을 사용하기 때문에 결론적으로는 24바이트의 12바이트 낭비

    return 0;
}