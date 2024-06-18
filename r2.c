#include <stdio.h>

int main() {

int main() {
    char continuar;
    int num, conta, i = 1;
    do {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num <0) {
            break;
        }
        conta = 1;
        while (i <= num) {
            conta *= i + num;
            i+2;
        }
    printf("Programa finalizado.\n");
    return 0;
}
}



