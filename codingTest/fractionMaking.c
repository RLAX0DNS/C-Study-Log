/*
문제 설명
첫 번째 분수의 분자와 분모를 뜻하는 numer1, denom1, 두 번째 분수의 분자와 분모를 뜻하는 numer2, denom2가 매개변수로 주어집니다. 두 분수를 더한 값을 기약 분수로 나타냈을 때 분자와 분모를 순서대로 담은 배열을 return 하도록 solution 함수를 완성해보세요.

제한사항
0 <numer1, denom1, numer2, denom2 < 1,000
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int* solution(int numer1, int denom1, int numer2, int denom2) {

    int denom = 0;
    int numer = 0;

    int *pt = malloc(sizeof(int)*2);
    if (denom1> denom2){
        if(denom1 % denom2 == 0){
            denom = denom1;
            if (denom1 == denom2){
                numer = numer1 + numer2;
            }else{
                numer2 = numer2 * (denom1 / denom2);
                numer = numer1 + numer2;
            }
        } else{
            denom = denom1 * denom2;
            numer1 = numer1 * denom2; 
            numer2 = numer2 * denom1;
            numer = numer1 +numer2;
        }
    } else {
        if(denom2 % denom1 == 0){
            denom = denom2;
            numer1 = numer1 * (denom2 / denom1);
            numer = numer1 +numer2;
        } else{
            denom = denom1 * denom2;
            numer1 = numer1 * denom2; 
            numer2 = numer2 * denom1;
            numer = numer1 +numer2;
        } 
    }

    int g = gcd(numer, denom);
    numer /= g; 
    denom /= g;

    pt[0] = numer;
    pt[1] = denom; 

    return pt;
}

/*
다른 사람들의 방법을 봤는데 일단 이렇게까지 복잡할 필요가 없음
간단하게 일단 먼저 통분이 아예안 된 분수형식을 만듦 

denom = denom1 * denom2
numer = denom1*numer2 + denom2*numer1

그리고 최대 공약수를 찾아서 둘에 나눔 
(위에 gcd 함수 참고)

그리고 그 최대공약수를 둘에 나누고 그 둘의 값을 리턴하면 돼...

이렇게 쉬운걸...

*/