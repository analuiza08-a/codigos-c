#include <stdio.h>

int main() {
    char frase[1000];
    int num_palavras = 0, nota = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", &frase);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ' && (frase[i + 1] == ' ' || frase[i + 1] == '\0')) {
            num_palavras++;
            nota = num_palavras*5;
        }
    }

    printf("Nota: %d\n", nota);

    return 0;
}
