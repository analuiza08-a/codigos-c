#include <stdio.h>

int main() {
    int cont,soma = 0, num;

    for (cont = 0; cont < 7 ; cont = cont + 1)  {

        printf("Digite um numero: ");
        scanf("%d", &num);

        soma = soma+num;

    }
    printf("%d", soma);
}
