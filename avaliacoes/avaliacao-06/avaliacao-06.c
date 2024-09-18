/*
Fazer um programa em C para executar as seguintes funcionalidades: Mostrar uma tela de Menu que recebe um valor de opcao. De acordo com o valor entrado (1,2,3,4) fazer as seguintes  

1) Escrever na Tela um Menu no formato abaixo:
----------------------------------------------------------------------
Sistema de Estoque
----------------------------------------------------------------------
1) Entrada de Produtos
2) Listar os Produtos
3) Valor Total do Estoque
4) Fim
Opção: __
---------------------------------------------------------------------

Opção 1
1) Entrar os seguintes dados em um formato de acordo com os dados abaixo: 
----------------------------------------------------------------------
Entrada de Cadastro de Produtos
----------------------------------------------------------------------
Código: 9999

Descrição: XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
Valor Unitário: 99.999,99
Qtd Estoque: 999
Valor Estoque: 999.999,99  (Campo calculado ValorUnitario x QtdEstoque)

Digite (1-Para Gravar, 2-Voltar a tela inicial) : __
Quando for digitado 1 gravar os dados em um array de struct de produtos.
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
    printf("1) Entrada de Produtos\n");
    printf("2) Listar os Produtos\n");
    printf("3) Valor Total do Estoque\n");
    printf("4) Fim\n");
    printf("Opção: ");
    scanf("%d", opcao); // scanf added here
    printf("----------------------------------------------------------------------\n");
}

void entrarDadosProduto() {
    Produto produto;
    printf("----------------------------------------------------------------------\n");
    printf("Entrada de Cadastro de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    printf("Código: ");
    scanf("%d", &produto.codigo);
    printf("Descrição: ");
    scanf("%49s", produto.descricao); // 49 para deixar espaço para o caractere nulo
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

float calcularValorTotalEstoque() {
    float valorTotal = 0;
    for (int i = 0; i < numProdutos; i++) {
        valorTotal += produtos[i].valorEstoque;
    }
    return valorTotal;
}

int main() {
    int opcao;
    do {
        mostrarMenu(&opcao);
        switch (opcao) {
            case 1:
                entrarDadosProduto();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                {
                    float valorTotal = calcularValorTotalEstoque();
                    printf("Valor Total do Estoque: %.2f\n", valorTotal);
                }
                break;
            case 4:
                printf("Fim do programa\n");
                break;
            default:
                printf("Opção inválida\n");
        }
    } while (opcao != 4);
    return 0;
}
