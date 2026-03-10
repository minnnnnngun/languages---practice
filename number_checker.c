#include <stdio.h>

int main () {
    int num;
    
    printf("숫자 입력:");
    scanf("%d", &num);
    
    if(num < 0 ) {
        printf("음수입니다");
    }
    else if(num > 0) {
        printf("양수입니다");
    }
    else {
        printf("0입니다.");
    }
    return 0;
}
