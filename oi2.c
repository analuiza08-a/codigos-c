#include <stdio.h>
#include <string.h>

int main () {
    int idade, nome;
    printf("Nome: ");
    scanf("%s", &nome);
    printf("Idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Cadastro permitido");
    }
    else {
        printf("Cadastro negado");
    }
    }
