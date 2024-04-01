/*
CABEÇALHO:

Instituto Federal de Educação, Ciência e Tecnologia do Ceará (IFCE)
Campus Fortaleza
Curso Superior de Tecnologia em Telemática
Disciplina de Lógica e Linguaguem de Programação

Atividade nº: 1 
Tema: "If... else para uma pontuação de sinuca"

Linguagem de programação: C

Autoria: Italo Wesley Oliveira de Aguiar

Data da solicitação: 18/03/2024
Data da conclusão: 19/03/2024 
(Obs: A data da conclusão não vincula-se, necessariamente, à data de envio.)
*/


/* 
PROPOSTA:

Implementar o programa abaixo:

// Faça um programa que leia a pontuação obtida por um jogador em // um jogo de Sinuca.
// E atenda os criterios definidos abaixo
// 0  -| 10  -> Insuficiente
// 10 -| 40  -> Regular
// 40 -| 70  -> Bom
// 70 -| 90  -> Otimo
// 90 -| 100 -> Excelente  
// O valor a ser avaliado será armazenado em uma variável inteira // chamada x.
// Usar o comando if elseif para imprimir a mensagem
// correspondente ao valor de x.
#include <stdio.h>

int main(void) {
  int x = 10;

  return 0;
}
*/


/* RESPOSTA: */

#include <stdio.h>

int main() {

  //int x = 10;

  int x;
  printf("Insira uma pontuação: \n");
  scanf("%d",&x);

  printf("\nCategoria: ");

  if(x>0 && x<=10) {
    printf("Insuficiente\n\n");
  } else if(x>10 && x<=40) {
    printf("Regular\n\n");
  } else if(x>40 && x<=70) {
    printf("Bom\n\n");
  } else if(x>70 && x<=90) {
    printf("Ótimo\n\n");
  } else if(x>90 && x<=100) {
    printf("Excelente\n\n");
  } else if(x<=0 || x>100) {
    printf("Talvez algo tenha dado errado... Confira se a pontuação inserida está contida no intervalo entre zero aberto e cem fechado (0-|100). Lembre-se que o valor ""aberto"" não está contido no conjunto, enquanto o valor ""fechado"" está.\n\n");
  } else {
    printf("Talvez algo tenha dado errado... Confira o código novamente.\n\n"); 
  }

  if (x==0 | x==10 | x==40 | x==70 | x==90) {
  printf("Obs: Caso deseje mais informações quanto a este resultado, por favor consulte os comentários posicionados no final do código.\n");
  } else {
    printf("\n");
  }

  return 0;
}


/*
COMENTÁRIOS:

- Notas: 
  1. Segundo Vieira (2011), o símbolo "|-" denota que o intervalo é fechado à esquerda e aberto à direita. Isto significa que o menor valor pertence à classe, enquanto quantias iguais ou maiores que o maior valor não pertencem.
  2. Tendo em vista o símbolo utilizado na questão proposta (-|), as classes foram constituídas por intervalos abertos a esquerda e fechados à direita, o oposto da citação acima (Nota 1). Desta forma, o menor valor foi excluído da categoria e o maior valor foi incluído.

- Referências bibliográficas: 
  Vieira, S. Apresentação de Dados em Tabelas. In: ______. Introdução à Bioestatística. Elsevier, 2011. p.35.

- Demais consultas: 
  a. https://www.w3schools.com/c/c_conditions_elseif.php
  b. https://www.freecodecamp.org/portuguese/news/instrucoes-if-else-em-c-explicadas/
  c. https://www.infoescola.com/matematica/intervalo/
*/
