#include <stdio.h>

int main() {
    int notas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int var = 0;

    for (int i = 0; i < 10; i++) {
        var += notas[i];
    }

    printf("%d \n", var);
}

