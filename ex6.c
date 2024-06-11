#include <math.h>
#include <string.h>

int main() {
    char senha1[20],senha2[20];

    printf("Digite sua senha: ");
    scanf("%s", senha1);

    printf("Digite-a novamente: ");
    scanf("%s", senha2);

    if(stricmp(senha1, senha2) == 0) {
        printf("Senha correta");
    }
     else {
        printf("Senha incorreta");

    }
    return 0;
    }

