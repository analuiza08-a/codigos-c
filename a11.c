#include <stdio.h>

int main() {
    float temperaturas[] = {27.5, 28, 29.7, 31.7, 25.3, 19, 16.3};
    float var = 0;

    for (int i = 0; i < 10; i++) {
        var += temperaturas[i];
    }

    var = var / 7;
    printf("A temperatura media da semana foi de %f graus Celsius ", var);

}
