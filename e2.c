#include <stdio.h>

int main() {
    int cont,mult = 1, num;

    for (cont = 0; cont < 3 ; cont = cont + 1)  {

        printf("Digite um numero: ");
        scanf("%d", &num);

        mult = mult*num;

    }
    printf("%d", mult);
  }

