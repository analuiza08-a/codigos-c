#include<stdio.h>

int main() {
    int num1, num2, result;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    result = num1 + (num2*num2);
    printf("O resultado da conta e: %d", result);
}


