#include <stdio.h>
#include<math.h>
#include <string.h>

int main () {
    int cod;
    char imp[2];
    printf("Digite o codigo de seguranca: ");
    scanf("%d", &cod);

    if (cod==123456){
       printf("Tem impressao digital cadastrada? ");
        scanf("%s", &imp);

        if (strcmp ( imp, "s" ) ==0 ) {
           printf("Acesso liberado");
            }
        else if  (strcmp ( imp, "n" ) ==0 ) {
           printf("Cadastrar a impressao digital");

    }

    }
    else {
        printf("Codigo errado");
    }
    }

