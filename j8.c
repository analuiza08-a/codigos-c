#include <stdio.h>
#include<math.h>

int main() {
    float valor, parcelas, valor_parcela,pago,vfinal;
    printf("Qual o valor da moto ? R$ \n");
    scanf("%f", &valor);
    printf("Quantidade de parcelas: \n");
    scanf("%f", &parcelas);

     valor_parcela = (valor / parcelas) * 1.15;

     printf("Voce pagara em %f vezes\n", parcelas);
     pago = valor_parcela/parcelas;
     printf("Cada parcela e de R$ %f\n",pago );

     vfinal = valor_parcela*parcelas;
     printf ("O valor final da moto sera de R$ %f", vfinal);
     }






