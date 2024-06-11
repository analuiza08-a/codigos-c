#include <stdio.h>
#include <math.h>

int main () {
    float fat = 1, cont, dig;
     printf("Digite o numero para fazer o fatorial: ");
     scanf("%f", &dig);
    for (cont=1; cont<= dig; cont=cont+1)
    {
        fat = fat*cont;

    }
        printf("%f \n", fat);
        return 0;
    }

