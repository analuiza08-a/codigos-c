#include <stdio.h>
#include <math.h>

int main() {
    float bruto, liquido;
    printf("Digite seu salario bruto R$");
    scanf("%f", &bruto);

    if (bruto <= 1903.98) {
        liquido = bruto - (bruto * 0.075);
        printf("Seu salario liquido e de R$ %.2f", liquido);
    }
    else if (bruto >= 1903.99 && bruto <= 1100.00) {
        liquido = bruto - (bruto * 0.075) - (bruto * 0.075);
        printf("Seu salario liquido e de R$ %.2f", liquido);
    }
    else if (bruto >= 1100.01 && bruto <= 2203.48) {
        liquido = bruto - (bruto * 0.075) - (bruto * 0.09);
        printf("Seu salario liquido e de R$ %.2f", liquido);
    }
    else if (bruto >= 2203.49 && bruto <= 2826.65) {
        liquido = bruto - (bruto * 0.075) - (bruto * 0.012);
        printf("Seu salario liquido e de R$ %.2f", liquido);
    }
    else if (bruto >= 2826.66 && bruto <= 3305.22) {
        liquido = bruto - (bruto * 0.015) - (bruto * 0.012);
        printf("Seu salario liquido e de R$ %.2f", liquido);
    }
    else if (bruto >= 3305.23 && bruto <= 3751.05) {
        liquido = bruto - (bruto * 0.015) - (bruto * 0.014);
        printf("Seu salario liquido e de R$ %.2f", liquido);
    }
    else if (bruto >= 3751.06 && bruto <= 4664.68) {
        liquido = bruto - (bruto * 0.225) - (bruto * 0.014);
        printf("Seu salario liquido e de R$ %.2f", liquido);
    }
    else if (bruto >= 4664.69) {
        liquido = bruto - (bruto * 0.275) - (bruto * 0.014);
        printf("Seu salario liquido e de R$ %.2f", liquido);
    }

    return 0;
}
