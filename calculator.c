#include <stdio.h>

int main() {
    int num1, num2;

    printf("첫 번째 숫자: ");
    scanf("%d", &num1);

    printf("두 번째 숫자: ");
    scanf("%d", &num2);

    printf("덧셈: %d\n", num1 + num2);
    printf("뺄셈: %d\n", num1 - num2);
    printf("곱셈: %d\n", num1 * num2);
    printf("나눗셈: %d\n", num1 / num2);

    return 0;
}
