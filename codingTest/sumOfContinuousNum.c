/*
연속된 세 개의 정수를 더해 12가 되는 경우는 3, 4, 5입니다. 두 정수 num과 total이 주어집니다. 연속된 수 num개를 더한 값이 total이 될 때, 정수 배열을 오름차순으로 담아 return하도록 solution함수를 완성해보세요.

제한사항
1 ≤ num ≤ 100
0 ≤ total ≤ 1000
num개의 연속된 수를 더하여 total이 될 수 없는 테스트 케이스는 없습니다.
*/

#include <stdio.h>
#include <stdlib.h>


int* solution(int num, int total) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int *answer = (int*) malloc (sizeof(int)*num);
    int n = total/num - num/2;
    int m = total/num - num/2+1;
    if (num % 2){
        for (int i =0; i<num; i++){
            answer[i] = n++;
        }
    }
    else{
        for (int i =0; i<num; i++){
            answer[i] = m++;
        }
    }

    return answer;
}