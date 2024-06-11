#include <math.h>
#include <string.h>

int main() {
    char email[500];
    int idade;

    printf("Digite o ano de nascimento: ");
    scanf("%i", &idade);

    if (idade<=2006){
        printf ("Digite seu email: ");
        scanf("%s", &email);
        printf("Voce esta liberado para usar o sistema");
        }

    else if(idade>2006) {
        printf("Usuario bloqueado");
    }
    return 0;
    }
