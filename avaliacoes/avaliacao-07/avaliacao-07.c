/*
Escreva um programa C compatível com o compilador C do ambiente Replit.com. O programa fará as operações a seguir:

    O programa apresentará um menu na console de saída. O menu consistirá de uma tela com opções a serem executadas. A entrada do valor de uma das opções do menu chamará uma funcionalidade correspondente em outra tela.

As opções do menu de são:

    Cadastrar Produto. Nessa opção serão informados os seguintes dados para entrada na tela: codigo, descrição, valor unitario, quantidade estoque;

    Consultar Produto para Alteração. Todos os dados citados anteriormente serão apresentados para serem alterados;

    Listar todos os produtos. Nessa opção para cada produto é calculado o valor do estoque multiplicando a quantidade em estoque vezes o preco unitario;

    Exclusão do Produto. Nessa opção a tela apresentará um código que será buscado e apresentará um produto. Na tela terá uma entrada de dados respondendo sim ou Não para confirmar exclusão do produto.

Observação: Os produtos serão armazenados em um array de struct de produtos.
*/

#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100
#define MAX_DESCRICAO 50

typedef struct {
    int codigo;
    char descricao[MAX_DESCRICAO];
    float valorUnitario;
    int quantidade;
    float valorEstoque;
} Produto;

Produto produtos[MAX_PRODUTOS];
int numProdutos = 0;

void mostrarMenu(int *opcao) {
    printf("----------------------------------------------------------------------\n");
    printf("Sistema de Estoque\n");
    printf("----------------------------------------------------------------------\n");
    printf("1) Cadastrar Produto\n");
    printf("2) Consultar Produto para Alteração\n");
    printf("3) Listar todos os produtos\n");
    printf("4) Exclusão do Produto\n");
    printf("5) Fim\n");
    printf("Opção: ");
    scanf("%d", opcao);
    printf("----------------------------------------------------------------------\n");
}

void cadastrarProduto() {
    Produto produto;
    printf("----------------------------------------------------------------------\n");
    printf("Cadastro de Produto\n");
    printf("----------------------------------------------------------------------\n");
    printf("Código: ");
    scanf("%d", &produto.codigo);
    printf("Descrição: ");
    scanf("%49s", produto.descricao);
    printf("Valor Unitário: ");
    scanf("%f", &produto.valorUnitario);
    printf("Qtd Estoque: ");
    scanf("%d", &produto.quantidade);
    produto.valorEstoque = produto.valorUnitario * produto.quantidade;
    printf("Valor Estoque: %.2f\n", produto.valorEstoque);
    int opcao;
    printf("Digite (1-Para Gravar, 2-Voltar a tela inicial) : __\n");
    scanf("%d", &opcao);
    if (opcao == 1) {
        produtos[numProdutos] = produto;
        numProdutos++;
    }
}

void consultarProduto() {
    int codigo;
    printf("----------------------------------------------------------------------\n");
    printf("Consultar Produto para Alteração\n");
    printf("----------------------------------------------------------------------\n");
    printf("Código do produto: ");
    scanf("%d", &codigo);
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Descrição: %s\n", produtos[i].descricao);
            printf("Valor Unitário: %.2f\n", produtos[i].valorUnitario);
            printf("Qtd Estoque: %d\n", produtos[i].quantidade);
            printf("Valor Estoque: %.2f\n", produtos[i].valorEstoque);
            printf("Digite (1-Para Alterar, 2-Voltar a tela inicial) : __\n");
            int opcao;
            scanf("%d", &opcao);
            if (opcao == 1) {
                printf("Nova Descrição: ");
                scanf("%49s", produtos[i].descricao);
                printf("Novo Valor Unitário: ");
                scanf("%f", &produtos[i].valorUnitario);
                printf("Nova Qtd Estoque: ");
                scanf("%d", &produtos[i].quantidade);
                produtos[i].valorEstoque = produtos[i].valorUnitario * produtos[i].quantidade;
            }
            return;
        }
    }
    printf("Produto não encontrado\n");
}

void listarProdutos() {
    printf("----------------------------------------------------------------------\n");
    printf("Lista de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("Código: %d\n", produtos[i].codigo);
        printf("Descrição: %s\n", produtos[i].descricao);
        printf("Valor Unitário: %.2f\n", produtos[i].valorUnitario);
        printf("Qtd Estoque: %d\n", produtos[i].quantidade);
        printf("Valor Estoque: %.2f\n", produtos[i].valorEstoque);
        printf("----------------------------------------------------------------------\n");
    }
}

void excluirProduto() {
    int codigo;
    printf("----------------------------------------------------------------------\n");
    printf("Exclusão do Produto\n");
    printf("----------------------------------------------------------------------\n");
    printf("Código do produto: ");
    scanf("%d", &codigo);
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado\n");
            printf("Confirmar exclusão (1-Sim, 2-Não) : __\n");
            int opcao;
            scanf("%d", &opcao);
            if (opcao == 1) {
                for (int j = i; j < numProdutos - 1; j++) {
                    produtos[j] = produtos[j + 1];
                }
                numProdutos--;
            }
            return;
        }
    }
    printf("Produto não encontrado\n");
}

int main() {
    int opcao;
    do {
        mostrarMenu(&opcao);
        switch (opcao) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                consultarProduto();
                break;
            case 3:
                listarProdutos();
                break;
            case 4:
                excluirProduto();
                break;
            case 5:
                printf("Fim do programa\n");
                break;
            default:
                printf("Opção inválida\n");
        }
    } while (opcao != 5);
    return 0;
}
