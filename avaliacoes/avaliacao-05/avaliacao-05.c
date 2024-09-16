/*
Escrever um programa em C que faz as seguintes operações:
A execução e o código fonte do programa deverão ser evidenciados no GitHub e o link do GitHub gravado no
Google Classroom.

1) Cria um arquivo que armazena linhas de textos;
2) O Arquivo será alimentado por dados digitados no teclado;
3) Mostrar o conteúdo do arquivo. (A partir do passo 6)

Observações:
1) Usar a função fopen para abrir um arquivo que será criado;
2) Usar a funções de entrada de dados pelo teclado;
3) Gravar a string lida do teclado no arquivo; 
4) Executar a instrução anterior até uma condição final. Para isso usar um laço while;
5) Fechar o arquivo;

6) Abrir o arquivo no modo de leitura;
7) Ler cada linha do arquivo e mostra-la no vídeo;
8) Fechar o arquivo.
*/  

  #include <stdio.h>
  #include <string.h>

  int main() {
      // 1. Crie um arquivo para armazenar linhas de texto
      FILE *fp;
      fp = fopen("arquivo_texto.txt", "w"); // Abra em modo de escrita

      if (fp == NULL) {
          printf("Erro ao abrir o arquivo!\n");
          return 1;
      }

      char linha[256]; // Buffer para armazenar a linha de entrada

      // 2. Alimente o arquivo com dados digitados no teclado
      printf("Digite linhas de texto (digite 'sair' para terminar):\n");
      while (1) {
          printf("> ");
          fgets(linha, sizeof(linha), stdin); // Leia a linha de entrada

          // Verifique se o usuário deseja sair
          if (strcmp(linha, "sair\n") == 0) {
              break;
          }

          // 3. Grave a linha de entrada no arquivo
          fputs(linha, fp);
      }

      // 5. Feche o arquivo
      fclose(fp);

      // 6. Abra o arquivo em modo de leitura
      fp = fopen("arquivo_texto.txt", "r");

      if (fp == NULL) {
          printf("Erro ao abrir o arquivo!\n");
          return 1;
      }

      // 7. Leia cada linha do arquivo e exiba-a
      printf("Conteúdo do arquivo:\n");
      while (fgets(linha, sizeof(linha), fp) != NULL) {
          printf("%s", linha);
      }

      // 8. Feche o arquivo
      fclose(fp);

      return 0;
  }

