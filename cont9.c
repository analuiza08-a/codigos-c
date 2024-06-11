#include <stdio.h>

int main() {
    int cont,num, mult=1;
    printf("Digite o numero: ");
    scanf("%d", &num);
    for (cont=0; cont<=num*10; cont=cont+num){
         printf("%d\n ",cont );
    }
        return 0;
    }

