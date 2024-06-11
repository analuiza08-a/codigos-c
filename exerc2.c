#include <stdio.h>
#include <math.h>

int main() {
    int num, multip, cont;
    printf("Digite um numero de 2 a 9: ");
    scanf("%d", &num);

     for(cont=1; cont <=300; cont=cont++) {
            multip=cont%num;

     if (cont%num==0)
        printf("%d", multip);
        }
        return 0;
}


