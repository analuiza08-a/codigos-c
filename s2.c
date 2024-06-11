#include <stdio.h>
int main() {
  int num;
  printf("Digite o numero: ");
  scanf(" %d", &num);
  switch (num) {
    case 1 && 2:
      printf("Figura Geometrica invalida");
      break;
    case 3:
      printf("Triangulo");
      break;
    case 4:
      printf("Quadrado");
      break;
    case 5:
      printf("Pentagono");
      break;
      case 6:
      printf("Hexagono");
      break;
    default:
      printf("Poligono Qualquer");
  }
  return 0;
}
