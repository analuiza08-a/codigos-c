#include <math.h>
#include <string.h>

int main() {
    float dinheiro, real, valor;
    char moeda[20];

    printf("Dolar ou Euro ?: ");
    scanf("%s", moeda);

    printf("Digite o valor em real: ");
    scanf("%f", &real);

    if (stricmp(moeda, "Dolar") == 0){
        valor = real*5/12;
    }

    else if (stricmp(moeda,"Euro")== 0){
        valor = real*5/48;
    }

    else {
    printf("Moeda nao reconhecida.\n");
    return 1;

    }
    printf("O valor e: %.2f", valor);

    return 0;

    }



