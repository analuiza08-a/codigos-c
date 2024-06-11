#include <stdio.h>
#include <math.h>
int main() {
  int cafe=0, tam=0, resul=0;
  printf("Selecione o cafe desejado (1- Expresso ; 2- Capuccino; 3- Latte :  ");
  scanf("%d", &cafe);

  printf("Selecione o tamanho desejado (4- Pequeno; 5- Medio; 6- Grande):  ");
  scanf("%d", &tam);
  printf("Voce selecionou:  %d\n", cafe );
  printf("Tamanho: %d\n", tam);
  switch (cafe) {
    case 1:
       if (tam == 4) {
        resul = 3 * 1;
            }
      else if (tam == 5) {
        resul = 3 * 2;
            }
     else if (tam == 6) {
        resul = 3 * 3;
            }
    printf("O valor e R$ %d\n", resul);
    break;
    case 2:
       if (tam == 4) {
       resul = 4 * 1;
            }
     else if (tam == 5) {
     resul = 4 * 2;
            }
    else if (tam == 6) {
    resul = 4 * 3;
            }
    printf("O valor e R$ %d\n", resul);
      break;
    case 3:
       if (tam == 4) {
      resul = 3 * 1;
            }
    else if (tam == 5) {
    resul = 3 * 2;
            }
    else if (tam == 6) {
    resul = 3 * 3;
            }
    printf("O valor e R$ %d\n", resul);
      break;
    default:
      printf("Erro");
  }
  return 0;
}
