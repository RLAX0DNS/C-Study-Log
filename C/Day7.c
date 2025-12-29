# include <stdio.h>

int main ()
{
    float data = 3.141;
    printf ("[%-19f]\n[%19f]\n",data, data);
    //위처럼 % 과 숫자 사이에 -를 넣으면 글짜가 왼쪽정렬이 됨//
    //만약 -를 안 넣으면 +를 생략한 것과 같기 때문에 오른쪽 정렬을 하게 됨//

    printf ("[%f]\n[%.4f]\n[%8.4f]\n", data, data, data);
    //마침표 . 를 사용해서 소수점 뒤에 자리수를 정할 수 있다//
    //소수점을 사용할 때는 반올림이 적용됨//

    printf ("%f%%\r", data);
    //이렇게 "" 안에 %% 두개가 연달아서 있으면 이걸 그냥 % 부호로 인식, 출력을 % 로 함//

    printf ("start");

    return 0;
}