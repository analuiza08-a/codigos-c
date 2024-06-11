#include <stdio.h>

int main() {
    int cont, multip;
        for (cont = 100; cont <= 300; cont = cont + 1)  {
            multip = cont%9;
        if (multip==0)
            printf("%d\n", cont);
        }

}
