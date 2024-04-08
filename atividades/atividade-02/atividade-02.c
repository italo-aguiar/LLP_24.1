/*
CABEÇALHO:

Instituto Federal de Educação, Ciência e Tecnologia do Ceará (IFCE)
Campus Fortaleza
Curso Superior de Tecnologia em Telemática
Disciplina de Lógica e Linguaguem de Programação

Atividade nº: 2 
Tema: "Impressão de números pares utilizando loop"

Linguagem de programação: C

Autoria: Italo Wesley Oliveira de Aguiar

Data da solicitação: 03/04/2024
Data da conclusão: 03/04/2024 
(Obs: A data da conclusão não vincula-se, necessariamente, à data de envio.)
*/


/* 
PROPOSTA:

Elaborar um código para imprimir números pares utilizando comandos de loop

*/

#include <stdio.h> 
int main() { 
  int numero;  
  for (numero = 0; numero <= 50; numero++) { 
    if ((numero % 2 == 0)  & (numero!=0)) { 
      printf("%d\n", numero); 
    } else {
    printf("\n");
    }
  }  
return 0; 
} 
