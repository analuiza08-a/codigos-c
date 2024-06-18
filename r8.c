#include <stdio.h>

int main() {
  int maior, menor, numeros[10];
  for (int i = 0; i < 10; i++) {
    printf("Digite o %d numero: ", i + 1);
    scanf("%d", &numeros[i]);
  }
  for (int i = 0; i < 10; i++) {
    if (numeros[i] > maior) {
      maior = numeros[i];
    }
    if (numeros[i] < menor) {
      menor = numeros[i];
    }
  }
  printf("Maior numero: %d\n", maior);
  printf("Menor numero: %d\n", menor);
  return 0;
}
