#include <stdio.h>

int main() {
    int num1, num2, result;
    char operacao[20];

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("adicao, subtracao, multiplicacao ou divisao ? ");

    if (strcmp (operacao, "adicao") == 0  ) {
        result = num1+num2;
        printf("%d\n");
    }
    else if (strcmp (operacao, "subtracao") == 0 ) {
        result = num1-num2;
        printf("%d\n");
    }
    else if (strcmp (operacao, "multiplicacao") == 0 ) {
        result = num1*num2;
        printf("%d\n");
    }
    else if (strcmp(operacao, "divisao") == 0 ) {
         if (num2 != 0) {
         result = num1 / num2;
            printf("Resultado: %d\n", result);
        } else {
            printf("Erro: divisao por zero\n");
        }
    }
    else {
        printf("Operacao invalida\n");
    }

    return 0;
}



