#include <stdio.h>

int main(){
    int i=5, sum;
    i++;
    //증가 연산자: i 의 값에서 1만큼을 증가시킴//
    //증가 연산자는 한개의 항만 갖는 연산자라서 매모리 1개 사용 & 좀 더 빠름//
    //감소 연산자는 --, 마이너스 부호 두번 반복//

    i=i+1;
    //덧샘 연산자: 뒤에 있는 숫자를 더함//
    //but 덧샘 연산자는 2개의 항을 갖는 연산자로 매모리 2개 사용 & 증가 연산자보다 느림//

    printf ("%d, %d\n",i, i);
    //근데 결과는 같음//

    sum = ++i;
    //전위형: 값을 먼저 증감한 후 연산 진행//
    //위에서 진행한 i 의 값을 받는거라 여기 연산에 들어가는 i 의 값은 7 //
    printf ("%d, %d\n", sum, i);
    //먼저 증감연산후 sum 에 증감연산후의 값이 대입됨//
    //결과로 i = sum = 8//

    sum = i++;
    //후위형: 값을 연산수 증감 진행//
    //위에서 진행한 i 의 값을 받는거라 여기 연산에 들어가는 i 의 값은 8 //
    printf ("%d, %d\n", sum, i);
    //먼저 sum 에 i 의 값을 대입 후 i 에 대해서 증감연산을 진행//
    //결과로 sum = 8, i = 9//

    //관계연산자!!

    //A == B: A equals B
    //A <= B: A smaller or equal to B
    //A >= B: A bigger or equal to B
    //A < B: A smaller than B
    //A > B: A bigger than B
    //A != B: A does not equal B

    //만약 결과가 참이면 1, 거짓이면 0//

    int compare1 = sum < i;
    int compare2 = sum == i;
    //여기서 i = 9, sum = 8//
    printf ("%d, %d", compare1, compare2);

    return 0;
}