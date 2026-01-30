#include <stdio.h>

int main () {
    char input = getchar();
    //getchr 는 입력 버퍼에 있는 하나의 문자만 받아서 변수에 저장할 수 있음
    //버퍼는 입력값을 임시로 저장하는 곳
    //getchar 에서 받아간 문자를 제외한 다른 문자들은 계속 버퍼에 남아있음

    rewind(stdin);
    //stdin 은 표준입력장치 
    //rewind(stdin) 을 사용해서 표준입력장치에 남아있는 변수에 저장안 된 문자들을 지울 수 있음 

    printf ("%c\n", input);

    char input2 = getc(stdin);
    rewind (stdin);
    printf ("input is %c\n", input2);
    //getc 도 한 문자만 읽는 함수
    //getc 는 stream이 가르키는 곳에서 문자 하나를 갖고와라 는 뜻
    //여기서 ()안에 stdin 을 씀으로써 getc 는 표준입력장치에서 한 문자를 갖고올 수 있게됨 

    char inputString[10];
    //gets(inputString);
    //gets 는 get string 의 약자, gets(); 로 하면 입력한 값을 ()안에 있는 배열에 저장함 
    //근데 만약 입력값이 지정된 배열보다 길면 메모리 침범 (Buffer Overflow) 발생, 프로그램 오작동, 강제종료등 이상한 일들이 일어날 수 있어서 쓰는걸 권장하지 않음
    fgets (inputString, 10, stdin);
    //fgets도 문자열을 갖고 오는 함수. 
    //fgets 의 구성: "fgets(문자열을 저장할 배열, 배열의 길이, 어디서 갖고올건지)"
    //fgets 은 gets 랑 다르게 길이를 설정할 수 있어서 더 안전함 
    //fgets 으로 배열에 문자열을 저장할 때 마지막 요소는 항상 널 (null)이여서 만약 배열의 길이를 10으로 했으면 실제 저장되는건 9개 문자 

    printf ("you wrote %s", inputString);

    char value;
    scanf("%c", &value);
    //만능표준입력함수 scanf 는 문자, 문자열, 실수, 정수 다 받을 수 있는 함수
    //scanf 의 구성 "scanf("입력 타입", &저장할 변수의 주소);"
    //입력타입과 변수의 타입이 일치해야됨 

    printf ("\n%c\n", value);

    return 0;
}