/*
Faça um programa usando a linguagem C que realiza a seguinte tarefa:
1) Use uma estrutura de repetição para mostrar na saída números inteiros pares entre 1 e 50.

Pode ser feito em Dupla. 
Mas deve ser registrado no GitHub de cada aluno envolvido.
Para evidenciar a entrega da atividade no Classroom deve ser postado o link da Atividade-02 no Github.
*/

#include <stdio.h>

int main() {
    int i;
    for (i = 2; i <= 50; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
