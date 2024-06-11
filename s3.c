#include <stdio.h>
#include <math.h>
int main() {
  int livro, lim, usuario;
  printf("Digite o usuario ( 1- Aluno; 2- Professor; 3- Pesquisador; 4- Visitante )  ");
  scanf("%d", &usuario);
  printf("Digite a quantidade de livros: ");
  scanf("%d", &livro);
  switch (usuario && livro) {
    case 1:
      lim = 3;
      if (livro <= lim ) {
      printf("Permitido");
      }
      else if (livro > lim) {
        printf("Nao permitido");
      }
      break;
    case 2 :
      lim = 5;
      if (livro <= lim ) {
      printf("Permitido");
      }
       else if (livro > lim) {
        printf("Nao permitido");
      }
      break;
    case 3 :
      lim = 10;
      if (livro <= lim ){
      printf("Permitido");
      }
       else if (livro > lim) {
        printf("Nao permitido");
      }
      break;
    case 4 :
      lim = 1;
      if (livro == lim ){
      printf("Permitido");
      }
       else if (livro > lim) {
        printf(" Nao permitido");
      }
      break;
    default:
      printf("Nao permitido");
  }
  return 0;
}
