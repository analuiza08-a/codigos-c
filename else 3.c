#include <stdio.h>
#include <math.h>

int main () {
    int ano;
    printf("Digite o ano: ");
    scanf("%i", &ano);

    if (ano % 400 == 0) {
        printf("Ano bissexto");
    }
    else if (ano % 4 == 0 && ano % 100 != 0) {
        printf("Nao e ano bissexto");
    }

    else {
         printf("Nao e ano bissexto");
   }
    }

