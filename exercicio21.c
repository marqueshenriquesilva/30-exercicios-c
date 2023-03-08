// Implemente um programa que leia uma matriz de números inteiros e calcule o produto dos elementos de cada linha da matriz, exibindo o resultado na tela.

#include <stdio.h>
#include <stdlib.h>

void PreencherMatriz(int *matriz[], int l, int c);
void ExibirMatriz(int *matriz[], int l, int c);
void ProdutoLinhas(int *matriz[], int l, int c);



int main(void)
{
    int l, c, i, j;

    // Tamanho da matriz
    printf("Numero de linhas: ");
    scanf("%d", &l);
    printf("Numero de colunas: ");
    scanf("%d", &c);

    // Inicializa matriz
    int *matriz[l];

    for (i = 0; i < l; i++)
        matriz[i] = (int*)malloc(c * sizeof(int));

    PreencherMatriz(matriz, l, c);
    ExibirMatriz(matriz, l, c);
    ProdutoLinhas(matriz, l, c);

    return 0;
}



void PreencherMatriz(int *matriz[], int l, int c)
{
    // Preenche matriz com numeros inseridos pelo usuario
    int i, j;
    printf("\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Numero[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
}

void ExibirMatriz(int *matriz[], int l, int c)
{
    // Exibe matriz completa
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void ProdutoLinhas(int *matriz[], int l, int c)
{
    // Calcula o produto dos elementos de cada linha e exibe o resultado na tela
    int i, j, prod = 1;
    printf("\n");
    for (i = 0; i < l; i++)
    {
        prod = 1;
        for (j = 0; j < c; j++)
        {
            prod *= matriz[i][j];
        }
        printf("Produto[%d] = %d\n", i, prod);
    }
}
