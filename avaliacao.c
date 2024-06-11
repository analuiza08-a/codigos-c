#include <stdio.h>

int main(){
    int opcao, cpf, livro;
    char continua;
    do {
    printf("Seja bem-vindo a Biblioteca Amanhecer ! \n [1] Exibir os livros disponiveis \n, [2] Contato da Biblioteca, \n [3] Informacoes de acesso a Biblioteca, \n [4] Documentos necessarios para cadastro, \n, [5] Emprestimos de livros");
    scanf ("%i", &opcao);

    switch (opcao) {
        case 1:
          printf("Estes sao os livros disponiveis: ");
          printf("1- O Codigo da Vinci- 098456\n");
          printf("2- E Assim que Acaba- 123456\n");
          printf("3- Verity-789654\n");
          printf("4- Cronicas de Narnia-145740\n");
          printf("5-O Senhor dos Aneis- A Sociedade do Anel- 098654\n");
          scanf("%i", &livro);
          break;

        case 2:
          printf("Para entrar em contato conosco ligue para: 14 99876-3456");
          break;

        case 3:
          printf("\n Biblioteca Amanhecer: aberta de segunda a sabado das 9:00 as 18:00.\n Horario de almoco: 11:00 ate as 13:00. \n Endereco: Rua Arlindo Cruz, 729, Jardim Botanico, Ourinhos-SP");
          break;

        case 4:
          printf("Informacoes para cadastro: \n Nome completo, \n Telefone, \n Endereco, \n RG ou CPF, \n  Data de Nascimento ");
          break;

        case 5:
          printf("Informe seu CPF: ");
          scanf("%i", &cpf);
          printf("Informe o codigo do livro: ");
          scanf("%i",&livro);
          printf("Voce esta realizando o emprestimo do livro no dia 28/05/2024\n");
          emprestimo == 28 + 5;
          printf("CPF: %i\n", cpf);
          printf ("Data de devolucao: 03/05/2024");
    }

           printf("\nDeseja continuar s/n\n");
    scanf(" %c", &continua);
    }while(continua=='s'|| continua=='S');

    printf("programa finalizado.");
    }





