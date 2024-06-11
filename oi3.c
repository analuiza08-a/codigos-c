#include <stdio.h>
#include <math.h>

int main () {
    float idade, salario;
    printf("Digite sua idade: ");
    scanf("%f", &idade);
    printf("Digite o salario R$ ");
    scanf("%f", &salario);

    if (idade >= 21 && salario >= 1500) {
        printf("Pode fazer emprestimo");
    }
    else {
        printf("Nao pode fazer emprestimo");
    }
    }
