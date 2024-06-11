#include <stdio.h>
#include <math.h>

int main() {
    float imposto, renda;
    printf("Digite o valor dos rendimentos anuais R$ ");
    scanf("%f", &renda);

    if (renda <= 1900) {
        imposto = 0;
        printf("Isento de imposto de renda\n");
    }
    else if (renda >= 1901) {
        imposto = renda * 0.15;
        printf("O valor do imposto e de R$ %.2f\n", imposto);
    }

    return 0;
}

