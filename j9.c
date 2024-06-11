#include <stdio.h>
#include<math.h>

int main() {
    float vi, meses, vf;
    printf("Digite o valor inicial R$ ");
    scanf("%f", &vi);
    printf("Digite o numero de meses que deseja manter o investimento: ");
    scanf("%f", &meses);
    vf = vi * pow(1.1, meses);
    printf("O valor final e de R$ %f", vf);
    }


