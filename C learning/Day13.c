#include <stdio.h>

int main () {
    int num, sum;

    for (num=1; num <=10; num++) printf ("%d\n", num);
    //for 반복문 구조: "for(시작조건; 종결조건; 변화수식) 명령문;"//
    //종결조건이 참이면 뒤에 수식과 명령문 실행//
    //위 경우 시작 조건에 있는 num 이 10보다 작아서 이 for 문을 실행함//

    for (sum=10; sum >0; sum--);
    if(sum ==0) printf ("for 문 정상작동\n");
    else printf ("for 문 작동 안 함\n");
    //위 코드로 종결조건이 참일 때 for 문은 실행된다는 사실을 확인 가능//

    int value = 100;
    for (; value!=100; value++) printf ("%d", value); 
    //실제 코드에서는 이런 조건 쓰면 안됨//
    //value 는 만약 100보다 큰 숫자로 시작했으면 계속 value!=100 이 조건이 참이기 때문에 무한 루프에 빠짐//
    //여기서 시작조건을 비워둔 이유는 내 value 의 초기 값을 int value =100 에 써놓은 대로 100으로 하고 싶어서다//
    //시작조건부분에 그냥 value 를 써도 되는데 그러면 컴파일러가 이 문장은 의미가 없다고 판단하여 에러를 표기한다//
    if (value==100) printf ("for 문 작동 안 함\n");
    else printf ("for 문 정상작동\n");
    //이렇게 하면 처음부터 종결조건이 거짓이라서 뒤에 수식과 명령문을 실행하지 않는다//
    //그래서 결국 value 의 값은 100 이기에 "for 문 작동 안 함" 이라는 문구가 출력된다//

    //만약 for 문 안에 아무것도 없는 형식의 for(;;) 로 작성하면 for 문 뒤에 따라오는 명령어를 계속 반복하는 무한루프가 만들어진다//
    //무한루프안에는 break 문으로 나올 수 있게 설계해야된다//

    int times = 0;
    while(times<=10){
        printf ("안녕하세요\n");
        times ++;
    }
    //while 반복문의 형태 while(조건문){명령어 & 수식}//
    //수식과 명령어의 형태에 대한 엄격한 규제가 없기 때문에 while 반복문은 비교적 자유롭게 활용할 수 있다//
    //while (1){명령어} 형태로 쓰면 while 로 무한루프를 만들 수 있다//

    int drink=0;
    do {
        drink ++;
        printf ("%d\n", drink);
    } while (drink>1);
    //do 명령어; while (조건문); 형태의 조건문은 먼저 명령어를 수행한 후 조건문과 비교를 함//
    //do while 반복문의 장점은 명령어를 적어도 한번은 수행 가능하다는 점//

    int iNumber = 0;
    int nresult;
    for (;iNumber <=10; iNumber ++) {
        nresult = iNumber*2;
        printf ("%d\n",nresult);
    }
    //구구단 출력 예제 by me//

    int i;
    for (i=1; i<=9; i++){
        printf ("%d * 2 = %d\n", i, i*2);
    }
    //모범답안 by book//

    int m; 
    for (m=1; m<5; m++){
        if (m==3) continue;
        //이렇게 continue 문을 사용하면 이 때의 m 값을 바로 계산 수식에 대합하여 아래에 있는 printf 함수을 실행하지 않는다//
        //결과로 1, 2, 4 만 출력된다//
        //continue 는 일회성 break 같은 느낌이다//
        printf ("%d\n", m);
    }

    return 0;
}