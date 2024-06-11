#include <stdio.h>
#include <math.h>

int main() {

        float soma = 0,nota, cont, media;

        for (cont=0; cont< 6; cont=cont+1){

        printf("Digite a nota : ");
        scanf("%f", &nota);
        soma = nota+soma;
        }
        media=soma/6;
        printf("a media e: %f \n  ", media);



        return 0;
    }
