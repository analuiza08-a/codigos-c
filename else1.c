#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    float oper, num1, num2;
    char str1 [20];

    printf("Digite qual operacao deseja: ");
    scanf ("%s", &str1);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (strcmp(str1, "adicao") == 0) {
        oper = num1 + num2;
        printf("%f", oper);
    }
    else if (strcmp(str1, "subtracao") == 0) {
        oper = num1 - num2;
        printf("%f", oper);
    }
    else if (strcmp(str1, "divisao") == 0) {
        oper = num1/num2;
        printf("%f", oper);
    }
    else if (strcmp(str1, "multiplicacao") == 0) {
        oper = num1*num2;
        printf("%f", oper);
    }
    }
