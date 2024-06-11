#include <stdio.h>
#include <string.h>

int main () {
    char str1 [1];
    printf("Digite uma letra: ");
    scanf("%s", &str1);

    if  (strcmp(str1, "a") == 0 || strcmp(str1, "e") == 0 || strcmp(str1, "i") == 0 || strcmp(str1, "o") == 0 || strcmp(str1, "u") == 0)
        {
        printf("Vogal");
        }

    else {
        printf("Consoante");
        }
        }
