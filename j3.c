#include <stdio.h>
#include <math.h>

int main() {
    float valor;
    char moeda[5];
    printf("Digite o valor: ");
    scanf("%f", &valor);
    printf("Convertem em real ou em dolar ? : ");
    scanf("%s", &moeda);

 if (strcmp(moeda, "real") == 0 || strcmp(moeda, "Real") == 0 || strcmp(moeda, "REAL") == 0) {

     valor *= 5.25 ;
    printf("O valor em reais e R$ %2.f", valor);
    }
    else if (strcmp(moeda, "dolar") == 0 || strcmp(moeda, "Dolar") == 0 || strcmp(moeda, "DOLAR") == 0) {
         valor *= 0.19;
        printf("O valor em reais e R$ 2.%f", valor);
    }
    }

