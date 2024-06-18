#include<stdio.h>

int main() {
    float km, min, custo = 0;
    printf("Digite a quilometragem : ");
    scanf("%f", &km);
    printf("Digite o tempo em minutos: ");
    scanf("%f", &min);
    custo =  (5*km) + (0.5*min);
    printf("O valor e R$ %f\n",custo);
}


