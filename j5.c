#include <stdio.h>
#include <math.h>

int main() {
    float VI, VA, lucro, prejuizo;
    printf("Digite o valor inicial R$ ");
    scanf("%f", &VI);
    printf("Digite o valo atual R$ ");
    scanf("%f", &VA);
     if (VA>VI) {
        lucro = VA-VI;
        printf("O lucro e de R$ %f", lucro);
    }
    else if (VA<VI) {
        prejuizo = VI - VA;
        printf("O prejuizo e de R$ %f", prejuizo);
    }
    else {
        printf("Mesmo valor");
        }
        }
