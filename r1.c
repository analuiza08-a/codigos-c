#include<stdio.h>

int main() {
    char continuar;
    int num, conta;

    do {
        printf("Digite o numero: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        conta = 1;
        int i = 1;
        while (i <= num) {
            conta *= i;
            i++;
        }

        printf("O valor em fatorial de %d e: %d\n", num, conta);
        printf("Deseja ver outro numero? (s/n)\n");


        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Programa finalizado.\n");

    return 0;
}
