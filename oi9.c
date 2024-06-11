#include <stdio.h>
#include <math.h>

int main() {
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade == 16 || idade == 17) {
        printf("Permitido, mas nao obrigario");
    }
    else if (idade >= 18) {
        printf("Obrigatorio votar");
    }
    else {
        printf("Nao permitido votar");
    }
    }
