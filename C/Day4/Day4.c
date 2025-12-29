//day 4 파일에 있는 header.h 파일에 내가 쓸 함수들을 선언해놓음//
//include "전처리기" 를 사용해서 그 헤더파일을 불러옴//

//만약 헤더파일이 같은 폴더안에 있으면 "" 로 헤더를 불러올 수 있음//
//만약 헤더파일이 다른 폴더에 있으면 ""안에 헤더파일의 경로를 적어야됨//
#include "header.h"
#include <stdio.h>
//printf 를 사용해야되서 stdio.h 파일도 불러옴//

int main ()
{
    int result; //result 의 타입을 선언함//
    result = sum (1,2); //여기서 sum 이라는 함수를 불러옴. 그냥 함수에 쓰는 printf 함수처럼 씀//
    printf ("%d\n", result); //printf 로 sum 의 결과값 출력//
    return 0;
}


