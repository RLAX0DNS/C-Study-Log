
#include <stdio.h>

void printBinary(int n) {
    // 32비트 정수 기준으로 가장 왼쪽 비트부터 확인
    for (int i = 31; i >= 0; i--) {
        // n을 i만큼 오른쪽으로 밀고, 가장 오른쪽 비트(1)만 추출
        int bit = (n >> i) & 1;
        
        printf("%d", bit);

        // 가독성을 위해 8비트마다 띄어쓰기 추가
        if (i % 8 == 0) printf(" ");
    }
    printf("\n");
}

int main() {
    int num;
    printf("10진수를 입력하세요: ");
    scanf("%d", &num);

    printf("%d의 2진수 모습: \n", num);
    printBinary(num);

    return 0;
}