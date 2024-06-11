#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int idade;
    char sn[2];

    printf("Digite a idade: ");
    scanf (" %d", &idade);

    if (idade <= 14) {
        printf("Tem autorizacao ? (s para Sim, n para Nao): ");
        scanf(" %s", &sn);

    if (strcmp ( sn, "s" ) ==0 ) {
                printf("Acesso liberado");
        }
        else if (strcmp ( sn, "n" ) ==0 ) {
                printf("Acesso negado");
        }
    }
    else if (idade >= 18) {
                printf("Acesso liberado");
    }
}




