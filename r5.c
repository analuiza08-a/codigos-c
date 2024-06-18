#include <stdio.h>

int main() {
    int num, cont;
    int primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 1) {
        primo = 0;
        for (cont = 2; cont <= num / 2; cont++) {
            if (num % cont == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo && num > 1) {
        printf("%d e primo\n", num);
    } else {
        printf("%d nao e primo\n", num);
    }

    return 0;
}
