#include <stdio.h>
#include <math.h>

int main() {
    int num, multip, cont;
    printf("Digite um numero: ");
    scanf("%d", &num);

     for(cont=7; cont <= num*200; cont=cont++) {
        multip=cont%num;
if (cont%num==0)
        printf("%d", multip);
        }
        return 0;
}



