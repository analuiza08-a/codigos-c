#include <math.h>
#include <stdio.h>

int main () {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1!=num2) {
        printf("Numeros diferentes");
    } else  {
        printf("Numeros iguais");
        }
    return 0;
    }

