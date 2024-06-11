#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    float compra,desc,juros;
    char forma [80];
    printf("Insira o valor da compra aqui R$ ");
    scanf("%f",&compra);
    printf("O pagamento sera a_vista ou parcelado de 2 a 5 vezes ? : ");
    scanf("%s", forma);

    if (strcmp(forma, "a_vista") == 0) {
        desc = compra*0.1;
        compra = compra - desc;
        printf("Sua compra foi de R$ %f", compra);
        }
    else if (strcmp(forma, "parcelado") == 0) {
        juros = compra*0.05;
        compra = compra+juros;
         printf("Sua compra foi de R$ %f", compra);
        }
        }
