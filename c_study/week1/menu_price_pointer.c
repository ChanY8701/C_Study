#include <stdio.h>
void myinfo(){
    printf("202606035 오찬영\n"); // 학번 이름 함수 설정
}

void printPrice( int *p, int m){
    
        if( m < 1 || m > 4){ // 1~4 이외 범위시 잘못입력 출력
            printf("잘못입력!\n");
       return;}
    switch (m) { // 메뉴판 설정 1~4번 내에서 메뉴 이름 출력 
        case 1:  
            printf("에소프레소");
            break;
        case 2:
            printf("아메리카노");
            break;
        case 3:
            printf("카페라떼");
            break;
        case 4:
            printf("바닐라라떼");
            break;   
    }

    int cost_vaule = *(p + (m - 1)); // 메뉴 번호에 따른 가격 계산 (포인터 연산)

    printf("%d,%03d", cost_vaule / 1000, cost_vaule % 1000); // 가격을 천 단위로 나누어 앞자리와 뒷자리를 출력 (천 단위 구분)
    
}

int main(void)
{
    myinfo();
    int price[] = { 3000, 4000, 4500, 4800 };
    int menu;
    
    scanf("%d", &menu);
    printPrice(price, menu);
}

