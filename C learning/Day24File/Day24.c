//텍스트 파일 vs 바이너리 파일 
//텍스트 파일은 문자로 구성된 파일 (그냥 텍스트 파일)
//바이너리 파일은 1바이트 크기의 숫자로 구성된 파일 (사진, 동영상, 오디오)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char String[8] = {'a','b','c',0,};
    //바이너리 속성을 기준으로 하면 이걸 {'97', '98', '99', 0,0,0,0,0} 이렇게 인식함. 그래서 총 8바이트 
    //텍스트 속성을 기준으로 하면 이건 {'a','b','c', NULL} 이렇게 인식함. 그래서 총 3바이트 (문자만 카운트 되니까)

    int sizeOfString = sizeof(String);
    int lenOfString = strlen(String);
    printf ("문자열 속성을 기준하면 크기는 %d\n텍스트 속성을 기준으로 하면 크기는 %d\n",lenOfString, sizeOfString);

    //파일 구조체!!
    FILE *pt=fopen("Day1.c", "r");; 
    //fopen 은 파일을 열어서 독립적인 Day1을 위한 FILE 구조체의 주소를 반환함 
    //위와 같이 선언하면 pt 안에는 Day1.c 를 위한 파일 구조체의 주소가 들어있음 
    //fopen 사용법: fopen("파일 이름", "여는 형식")
    //맨 앞에 붙은 FILE 은 이 포인터가 파일 구조체를 가르킨다는걸 알려줌

    if (NULL!=pt){
        printf("정상 작동\n");
        fclose(pt);
        //파일을 열었으면 꼭 닫아야됨. 안그러면 파일 망가짐. malloc & free 같은 느낌 
    }
    else printf ("파일 열기 실패\n");
    //파일 구조체는 실패하면 눌을 반환해서 이렇게 if 문을 추가해주는 것도 나쁘지 않음 




//텍스트 파일을 처리할 때!!
//아래 내용은 텍스트 파일만 

//텍스트 파일에 텍스트 입력 
    FILE *new = fopen("new.c", "w");
    //쓰기 속성으로 new.c 라는 파일을 만들고 그 파일을 관리하는 파일 구조체의 주소를 new 라는 포인터에 저장
    if (NULL!=new){
        fprintf (new, "//hello!!\n");
        //fprintf 함수로 //hello!! 를 저장하고 줄바꿈
        //fprinf 사용법!! fprintf(실행파일의 포인터, "저장할 내용");
        fclose(new);
    }

    FILE *finalDay = fopen ("finalDay.txt", "w");
    if (NULL!= finalDay) {
        int data = 0x0124;
        int data1 = 0x929;
        fprintf (finalDay, "%x %x", data, data1);
        //이렇게 변수를 저장하고 싶을 때는 printf 함수 쓸 때와 비슷하게 "타입", 변수이름 으로 해결할 수 있음 
        fclose(finalDay);
    }
    else printf ("오류");

//파일에서 텍스트 출력
    int dataFromFinalDay[32] = {0};
    finalDay = fopen("finalDay.txt", "rt"); 
    //위에서 사용한 쓰기 모드에서는 데이터를 읽을 수 없기 때문에 읽기 모드로 다시 열기
    if (finalDay != NULL) {
        fscanf(finalDay, "%x", dataFromFinalDay);
        //fscanf 함수는 파일에 있는 값을 읽을 수 있는 함수. 근데 단어 단위로 
        //fscanf 함수 활용법!! fscanf(파일 포인터, "받을 데이터의 형식", &받을 데이터를 저장할 변수);
        //fscanf 함수는 파일을 열고 그 파일의 값을 변수의 주소를 읽음을 통해서 그 변수에 저장함 
        //근데 fscanf 함수는 공백을 다음줄의 시작으로 판단함. 그래서 "0124 0124" 이렇게 입력하면 0124\n0124 이렇게 출력됨 

        rewind (finalDay);
        //rewind 를 사용해서 finalDay 의 포인터를 맨 처음으로 이동시킴 

        printf("읽어온 값:\n");
        while (EOF != fscanf(finalDay, "%x", dataFromFinalDay)){
            //EOF 는 end of file. 파일 끝나면 EOF 를 반환함 
            //EOF 를 반환하지 않을 때까지 반복 
            printf("%x\n", *dataFromFinalDay);
            //그냥 dataFromFinalDay 하면 포인터니까 앞에 * 붙여주고 
        }
        //이렇게 fscanf 를 사용하면 단어 단위로 읽기 때문에 124, 929 를 다른 단어로 인식해 출력이 124\n929 이렇게 나옴 

        fclose(finalDay); // 읽기가 끝났으므로 닫음
    }
    else printf ("오류");

//텍스트 파일에 텍스트 출력 
    char newText[32] = {};
    FILE *textPT = fopen("newText.txt", "wt");
    if (textPT !=NULL){
        fgets(newText, sizeof(newText), stdin); 
        //scanf 는 공백을 만나면 끝나기 때문에 fgets 로 입력창에서 변수를 받아서 newText 에 저장함 
        fprintf(textPT, "%s", newText);

        fclose(textPT);
    }
    else printf("에러");

    textPT= fopen("newText.txt", "rt");
    if (textPT!=NULL){
        fgets(newText, sizeof(newText), textPT);
        //fscanf 를 대신할 수 있는 fgets 함수!! 얘는 줄 단위로 출력함 
        //fgets 함수 사용법!! fgets(받은 데이터를 저장할 변수의 주소, 몇칸까지 읽을지, 읽을 파일의 포인터);
        //fgets 는 char 단위 변수만 처리 가능함 
        printf("%s\n", newText);
        //여기서는 또 *를 빼는 이유는 string 을 읽어들이는 경우에는 시작 주소부터 눌이 나올때까지 쭉 읽는거. 그래서 시작주소를 줘야됨. 그래서 *없어야됌 

        fclose(textPT);
    }
    else printf("error");
    
//텍스트 파일 처리 방법에 관한 내용 끝!!!




//바이너리 파일 처리법 

    int dataForBi = 181818;
    int heyhey[4] = {1,2,3,4};

    FILE *bilearning = fopen("biLearning.txt", "wb");
    if (bilearning != NULL){
        fwrite (&dataForBi, sizeof(int), 1, bilearning);
        //fwrite 함수는 어떤 값이나 데이터를 파일에 저장하는 함수
        //fwrite 함수의 사용법!!fwrite(저장될 데이터의 주소, 데이터의 크기, 반복횟수, 파일포인터);

        fwrite (heyhey, sizeof(int), 4, bilearning);

        fclose(bilearning);
    }
    else printf ("error");


    int temp_string[5] = {};

    bilearning = fopen("biLearning.txt", "rb");
    if(bilearning != NULL){
        fread (&temp_string, sizeof(int), 5, bilearning);
        //fread 함수!! 파일의 내용을 읽는 함수 
        //fread 함수 사용법!!! fread(&데이터를 저장할 변수, 데이터의 크기, 반복횟수, 파일포인터);
        for (int i =0; i<=4; i++){
            printf ("%d\n", temp_string[i]);
        }
        //저장한거 출력 
        fclose(bilearning);
    }
    else printf ("error");

//바이너리 파일 처리법 끝!!!


/*
fseek 함수!!
fseek 사용법!! fseek(파일 포인터, 이동 거리, 시작점)
fseek 에서 시작점은 총 3가지가 있음
SEEK_SET: 파일의 시작점 
SEEK_END: 파일의 끝
SEEK_CUR: 현제위치 
이동 거리에 정수를 입력하면 오른쪽으로 적은 만큼 이동
이동 거리에 음수를 넣으면 왼쪽으로 입력
만약 SEEK_END 쓰고 이동거리에 정수 넣으면 파일 밖으로 나가게 되서 에러남 
fseek 는 성공하면 0를 리턴함 

이렇게 이동한 거리를 알고 싶으면 ftell 사용 
ftell(파일 포인터) 하면 오 포인터가 얼마나 움직였는지 알려줌
ftell 의 리턴값은 숫자여서 변수로 받아줘야됨 
*/


    return 0;
}


    //파일을 다룰 때 형식들이 있음
    /*
    t: 텍스트 속성으로 파일을 처리하는 형식
    b: 바이너리 속성으로 파일을 처리하는 형식
    */ 

    //파일을 열 때 다른 모드들이 있음 
    /*
    r: 읽기 모드. 만약 fopen 함수에서 읽기 모드로 지정한 파일이 존재하지 않으면 파일 열기 실패 + null 반환
    w: 초기화 쓰기 모드. 만약 fopen 함수에서 지정한 쓰기모드의 파일이 없으면 그 이름으로 파이을 만든 후에 파일을 연다. 만약 파일이 있으면 원래 파일에 있던 내용은 다 지우고 처음부터 시작한다
    a: 이어쓰기 모드. fopen 함수에서 지정한 파일을 열어서 기존상테에서 더 이어쓸 수 있다. 이어 쓰기모드의 파일이 없으면 그 이름으로 파이을 만든 후에 파일을 연다
    */

    //파일을 열 때 모드와 형식들 지정하기
    /*
    바이너리 읽기는 rb (그냥 r 도 된다)
    텍스트 읽기는 rt
    바이너리 쓰기는 wb (그냥 w 도 된다)
    텍스트 쓰기는 wt
    바이너리 이어쓰기는 ab
    텍스트 이어쓰기는 at
    */