#include <stdio.h>
#include <string.h>

int main () {
    int idade, apos, tempo;
    char pessoa[10];

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Voce e mulher ou homem? : ");
    scanf("%s", pessoa);

    if (strcmp(pessoa, "mulher") == 0) {
        apos = 62;
        if (idade < apos) {
            tempo = apos - idade;
            printf("Faltam %i anos para a aposentadoria\n", tempo);
        } else if (idade >= apos) {
            printf("Voce esta aposentada\n");
        }
    } else if (strcmp(pessoa, "homem") == 0) {
        apos = 65;
        if (idade < apos) {
            tempo = apos - idade;
            printf("Faltam %i anos para a aposentadoria\n", tempo);
        } else if (idade >= apos) {
            printf("Voce esta aposentado\n");
        }
    } else {
        printf("Gênero não encontrado\n");
    }
}



