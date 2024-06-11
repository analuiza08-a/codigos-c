#include <stdio.h>
#include <math.h>

int main () {
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Acesso permitido no Bar");
    }
    else {
        printf("Acesso negado");
    }
    }

