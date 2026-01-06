#include <stdio.h>

#include <string.h>
//헤더파일, 안에 string 를 관리하는 함수들이 있음//


int main (){
    char student [5];
    //배열 선언하는 법! "자료형 변수이름 [요소 개수]"
    //위와 같은 배열을 선언하면 student[0], student[1], sudent[2], student[3], student[4] 가 생성된다//
    //요소의 번호는 0부터 시작. 만약 n 개의 요소가 있다면 마지막 요소의 번호는 n-1//
    //배열의 크기는 "요소개수 * 자료형 크기" 가 된다. 이 경우에는 4*5=20바이트다//
    //요소 개수에는 항상 상수가 와야된다. 변수, 유리수, 무리수 다 안된다//

    student[2] = 9;
    //이렇게 선언된 배열의 특정 요소를 특정하려면 "변수이름[요소]" 꼴로 만들면 된다//
  
    char num=4;
    student[num] = 4;
    //배열의 요소를 특정할 때는 요소 부분에 변수를 써도 된다//

    printf ("%d, %d\n", student[2], student[num]);

    //for 문으로 함수 값 배정하기//
    char i=0;
    for (; i<=4; i++ ){
        student[i] =5;
        printf ("%d, ", student[i]);
        //요소번호가 올라갈 때마다 그 요소에 5가 대입된다//
    }

    char day[20] = {1, 4, 7,0,};
    //이렇게 쓰면 day 라는 배열을 20개 만든 후 {} 안에 있는 숫자를 상응하는 번호의 요소에 대입한다는 뜻//
    //비워두거나 없으면 그냥 0이라는 의미. 이렇게 해서 변수를 초기화 시킬 수 있다//
    //배열의 전체 요소에 활용할 때만 {} 사용 가능. 개별 요소한테 값을 줄 때 {}를 쓰면 에러남//
    printf ("\n%d, %d, %d, %d\n", day[0], day[2], day[4], day[18]);

    char month[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    //이렇게 배열을 선언할 때 []안을 비워둬서 있는 요소의 개수의 맞게 자동으로 만들 수 있음//

    char good[6] = {'h','a','p','p','y', 0};
    //여기서 "happy" 라는 문자열을 good 자를 배열에 저장하려면 총 6바이트가 필요하다//
    //각 문자당 1 바이트 + 마지막에 마침표 역할을 하는 0 (null 문자)까지 총 6개가 필요하다//
    //널 문자는 그냥 0이라고 써도 되고 '\0' 으로 해도 된다. 그냥 숫자 0이 필요하면 '0'을 쓰면 된다//

    char bad[7] = {'s','c','h','o','o','l', 0};
    //문자열은 널 문자를 만날 때까지 실행되기 때문에 만약 널 문자가 없으면 이 문자열은 계속 출력된다//
    //맥 os 는 보안장치 때문에 이 메모리 주변이 다 0으로 되있기 때문에 정상적으로 school 이 출력되지만 다른 체제에서는 다를 수 있음//
    //암튼 이렇게 쓰면 위험함. 쓰지말 것//

    char neutral [] = "not bad"; 

    printf ("%s\n%s\n%s\n", good, bad, neutral);
    //문자열은 string 을 의미하는 %s 를 쓴다//



    //<string.h> 헤더안에 있는 함수들//
    int neutralLength;
    neutralLength = strlen(neutral);
    printf ("string length = %d\n", neutralLength);
    //위처럼 strlen 은 string 의 length 를 구하는 함수라서 두 단어의 앞 알파벳들을 따서 명명됨//
    //strlen 사용법: strlen(문자열)//

    char glgl[]="hello";
    char zlzl[14];

    strcpy (zlzl, glgl);
    strcat (zlzl, " world");

    printf ("%s! %s\n", glgl, zlzl);

    return 0;
}