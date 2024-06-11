#include <stdio.h>
#include <math.h>

int main() {
    float juros=0.07,emp,meses,VF;
    printf("Digite o valor do emprestimo (de R$100 ate R$10000): ");
    scanf("%f", &emp);
    printf("Digite os meses (ate 36 meses): ");
    scanf("%f", &meses);
    VF=emp*(1+juros*meses)/meses;
    if (emp<100 || emp > 10000) {
        printf("Valor nao permitido\n");
        return 0;
    }
    else if (meses > 36) {
        printf ("Nao e permitido\n");
        return 0;
    }
      printf("O valor e de R$ %f", VF);
      }




