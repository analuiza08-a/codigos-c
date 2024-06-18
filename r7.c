#include <stdio.h>

int main() {
    int notas[] = {8, 9, 10, 7, 6};
    int tam = notas / notas[0];
    int soma = 0;

    for (int i = 0; i < tam; i++) {
        soma += notas[i];
    }

    if (tam > 0) {
        int media = soma / tam;
        printf("A media e: %d\n", media);
    } else {
        printf("Não é possível calcular a média\n");
    }

    return 0;
}
