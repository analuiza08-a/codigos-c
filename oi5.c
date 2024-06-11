#include <stdio.h>
#include <math.h>

int main() {
    float idade,desc, compra;
    printf("Digite a idade: ");
    scanf("%f", &idade);
    printf("Digite o valor da compra R$ ");
    scanf("%f", &compra);

    if (idade >= 65) {
         desc = 0.1 * compra;;
        printf("Desconto R$ %.2f\n",desc );
        compra = compra - desc;
        printf("Total R$ %.2f\n",compra);
    }

    else {
        printf("Sem desconto, total R$ %.2f\n", compra);
    }
    }
