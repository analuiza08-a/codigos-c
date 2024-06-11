#include <stdio.h>
#include <math.h>

  int main() {
    int num;
    printf("Digite 1 para luz; 2 para agua; 3 para alimento; 4 para animais e 5 para plantas: ");
    scanf("%d", &num);

    if (num == 1 ) {
        printf("Dicas:Utilizar lampadas LED;\n Desligar as luzes quando nao estiver em uso;\n Pintar as paredes com cores claras.");
    }
     else if (num == 2 ) {
        printf("Dicas: Concertar vazamentos;\n Reduzir o tempo no banho;\n Reutilizar a agua domestica.");
    }
     else if (num == 3 ) {
        printf("Dicas: Armazenar alimentos corretamente;\n Planejar as refeicoes;\n Compostar os residuos de alimentos.");
    }
    else if (num == 4 ) {
        printf("Dicas: Adotar de abrigos ou resgates;\n Escolher racoes sustentaveis;\n Estimular o exercico ao ar livre. ");
    }
     else if (num == 5 ) {
        printf("Dicas:Fazer compostagem;\n Evitar o uso de produtos quimicos;\n Praticar a poda sustentavel  ");
    }
    }

