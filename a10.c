#include <stdio.h>

int main() {
    float notas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float var = 0;

    for (int i = 0; i < 10; i++) {
        var += notas[i];
    }

    var = var / 10;
    printf("%f \n", var);
}

