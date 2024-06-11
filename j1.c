#include <stdio.h>
#include <math.h>

int main() {
    float r=0.05,P,t, VF;
    printf("Digite o valor inicial: ");
    scanf("%f", &P);
    printf("Digite os anos: ");
    scanf("%f", &t);
    VF = P +(P*r*t);
    printf("O Valor Final e de: %f", VF);
    return 0;
    }



