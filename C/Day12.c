# include <stdio.h>

int main () {
    int day;
    scanf ("%d", &day);

    switch(day>15){
        case 1:
            printf ("절반이 지났네~ 남은 날도 화이팅!!");
            break;
        case 0:
            printf ("아직 이번 달의 절반 이상이 남았네~ 화이팅!");
            break;
        default:
            printf("날짜를 입력해");
            break;
    }

    return 0;
}

//switch 문!!

//switch 문의 기본 형태:
//switch(수식 or 변수){
//  case 값:
//     명령어;
//     break;
//  case 값:
//     명령어;
//     break;
//  default:
//     명령어;
//     break;
//}

//switch 문은 break 를 만나기 전까지 계속 실행된다//
//switch 문은 맨 처음 괄호 안에 있는 값과 동일한 값을 가진 case 문을 만나면 거기로 점프해 그 case 문을 break 를 만날 때까지 실행한다//
//case와 default의 뒤에는 항상 세미콜론 대신 그냥 콜론은 쓴다//
//switch 문에 오는 변수 혹은 수식은 항상 int 혹은 char 형식의 것이여야 된다//
//default 는 if else 문의 else 와 비슷한 작용을 한다. 만약 case 문을 충족하지 않는 변수면 default 문이 실행된다//




//위 코드에서 에러가 나는 이유는 day > 15라는 식의 결과는 오직 1(참) 또는 0(거짓) 둘 중 하나인데 switch 문은 보통 여러 가지 선택지(예: 1, 2, 3, 4...)를 처리하기 위해 사용하는데, 결과가 0과 1뿐이라면 차라리 if-else 문을 쓰는 것이 훨씬 깔끔하고 효율적이기 때문에 컴파일러가 경고를 보내는거다