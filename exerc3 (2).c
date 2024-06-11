#include <stdio.h>
#include <math.h>

int main() {
    int num, multip, cont;
    printf("Digite um numero: ");
    scanf("%d", &num);

     for(cont=0; cont <= num*200; cont++) {
        if (cont%7==0)
        printf("%d \n", cont);
        }
        return 0;
}



