#include <stdio.h>
#include <math.h>
int main() {
  char operacao;
  float resul, num1, num2;
  printf("Digite a operacao desejada (+, -, *, /):  ");
  scanf(" %c", &operacao);
  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);
  switch (operacao) {
    case '+':
      resul = num1+num2;
      printf("Soma: %f\n", resul);
      // Implementar c�digo para pegar os n�meros e somar
      break;
    case '-':
        resul = num1-num2;
      printf("Subtracao: %f\n", resul);
      // Implementar c�digo para pegar os n�meros e subtrair
      break;
    case '*':
        resul = num1*num2;
      printf("Multiplicacao: %f\n", resul);
      // Implementar c�digo para pegar os n�meros e multiplicar
      break;
    case '/':
        resul = num1/num2;
      printf("Divisao: %f\n", resul);
      // Implementar c�digo para pegar os n�meros e dividir (verificar divis�o por zero)
      break;
    default:
      printf("Operacao invalida!\n");
  }
  return 0;
}
