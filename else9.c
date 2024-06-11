#include <stdio.h>
#include<string.h>

 int main () {
    char str1[20];
    char str2[20];
    int senha,senha1;

    printf("Login: ");
    scanf("%s", str1);
    printf ("Senha: ");
    scanf("%i", &senha);
    printf("Login novamente: ");
    scanf("%s", str2);
    printf("Senha novamente: ");
    scanf("%i", &senha1);

    if (strcmp(str1, str2) == 0) {
        printf("Login correto\n");
    }

    else {
        printf("Login incorreto\n");
    }
     if (senha == senha1) {
        printf("Senha correta\n");
    }
    else  {
        printf("Senha incorreta\n");
    }
 }

