#include <stdio.h>
#include <math.h>

int main() {
    int est;
    char prod[20];
    printf("Digite o  produto: ");
    scanf("%s", &prod);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &est);
    if (est < 20) {
        printf("Realizar um novo pedido de compra");
    }
    else if (est >= 20) {
        printf("Tranquilo, por enquanto");
    }
    }


