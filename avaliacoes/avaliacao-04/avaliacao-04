Modificar o programa abaixo, de forma a implementar uma função verifica_aprovacao e uma função mostra_aprovacao.


A função verifica_aprovacao percorre o array de alunos declarados e definidos no código fazendo as seguintes verificações: 
1)  Se o numero de faltas for maior ou igual a 20, considerar que o aluno será reprovado. Atualizar o campo Reprovado_SN com o valor 'S';
2)  Calcular a Media fazendo o seguinte calculo (N1 + N2)/2. O resultado atualizará o campo Media.

A função mostra_aprovacao percorre o array de alunos já modificados e mostra os dados do aluno (matricula, nome, N1, N2, Faltas). Também apresentará as seguintes mensagens:
"REPROVADO POR FALTA" se o campo Reprovado_SN for igual a 'S';
"REPROVADO POR MEDIA" se o campo Media for menor que 6.0;
"APROVADO" se naõ atender as condições anteriores.

#include <stdio.h>

typedef struct {
    int matricula;
    char nome[20];
    float N1;
    float N2;
    float Media;
    int Faltas;
    char Reprovado_SN;
} Aluno;

int main() {
    Aluno alunos[5] = {
        {1, "João", 8.5, 9.0, 0.0, 25,' '},
        {2, "Maria", 9.0, 8.0, 0.0, 1,' '},
        {3, "Pedro", 7.5, 8.5, 0.0, 3,' '},
        {4, "Ana", 9.5, 9.5, 0.0, 20,' '},
        {5, "Luiz", 8.0, 7.0, 0.0, 4,' '}
    };

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("N1: %.2f\n", alunos[i].N1);
        printf("N2: %.2f\n", alunos[i].N2);
        printf("Faltas: %d\n\n", alunos[i].Faltas);
    }

    return 0;
}


======================================================================================


RESPOSTA: 

#include <stdio.h>

typedef struct {
    int matricula;
    char nome[20];
    float N1;
    float N2;
    float Media;
    int Faltas;
    char Reprovado_SN;
} Aluno;

void verifica_aprovacao(Aluno *aluno) {
    aluno->Media = (aluno->N1 + aluno->N2) / 2;
    if (aluno->Faltas >= 20) {
        aluno->Reprovado_SN = 'S';
    }
}

void mostra_aprovacao(Aluno *aluno) {
    if (aluno->Reprovado_SN == 'S') {
        if (aluno->Faltas >= 20) {
            printf("%s - REPROVADO POR FALTA\n", aluno->nome);
        } else {
            printf("%s - REPROVADO POR MÉDIA\n", aluno->nome);
        }
    } else {
        printf("%s - APROVADO\n", aluno->nome);
    }
    printf("Matrícula: %d\n", aluno->matricula);
    printf("N1: %.2f\n", aluno->N1);
    printf("N2: %.2f\n", aluno->N2);
    printf("Média: %.2f\n", aluno->Media);
    printf("Faltas: %d\n", aluno->Faltas);
}

int main() {
    Aluno alunos[5] = {
        {1, "João", 8.5, 9.0, 0.0, 25, ' '},
        {2, "Maria", 9.0, 8.0, 0.0, 1, ' '},
        {3, "Pedro", 7.5, 8.5, 0.0, 3, ' '},
        {4, "Ana", 9.5, 9.5, 0.0, 20, ' '},
        {5, "Luiz", 8.0, 7.0, 0.0, 4, ' '}
    };

    for (int i = 0; i < 5; i++) {
        verifica_aprovacao(&alunos[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        mostra_aprovacao(&alunos[i]);
        printf("\n");
    }

    return 0;
}



