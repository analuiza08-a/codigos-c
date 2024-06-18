#include<stdio.h>

int main() {
    int voto, Fernando=0, Paulo=0, cont;

        for (cont = 1; cont <= 10; cont++) {
            printf("1 para Fernando, 2 para Paulo: \n");
            scanf("%d", &voto);
        if (voto==1) {
        Fernando = Fernando + 1;
        }
        else if (voto==2) {
         Paulo = Paulo + 1;
        }
        printf(" Votos do Fernando: %d\n", Fernando);
        printf(" Votos do Paulo: %d\n", Paulo);
        }
}



