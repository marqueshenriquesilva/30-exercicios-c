// Implemente um programa que leia uma matriz de números inteiros e calcule a soma de todos os elementos da diagonal secundária, exibindo o resultado na tela.

#include <stdio.h>
#include <stdlib.h>

void PreencherMatriz(int *matriz[], int l, int c);
void ExibirMatriz(int *matriz[], int l, int c);
void ExibirDiagonalSecundaria(int *matriz[], int l, int c);
int SomaDiagonalSecundaria(int *matriz[], int l, int c);


int main(void)
{
    int l, c, i, j, soma = 0;

    // Tamanho da matriz
    printf("Numero de linhas e colunas: ");
    scanf("%d", &l);
    c = l;

    // Inicializa matriz
    int *matriz[l];

    for (i = 0; i < l; i++)
        matriz[i] = (int*)malloc(c * sizeof(int));

    PreencherMatriz(matriz, l, c);
    ExibirMatriz(matriz, l, c);
    ExibirDiagonalSecundaria(matriz, l, c);

    soma = SomaDiagonalSecundaria(matriz, l, c);

    printf("\nSoma da diagonal secundaria = %d\n", soma);

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

void ExibirDiagonalSecundaria(int *matriz[], int l, int c)
{
    // Exibe diagonal secundaria
    int i, j;
    printf("\n");
    for (i = 0, j = c - 1; i < l, j >= 0; i++, j--)
    {
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}

int SomaDiagonalSecundaria(int *matriz[], int l, int c)
{
    // Soma elementos da diagonal secundaria
    int i, j, soma = 0;
    for (i = 0, j = c - 1; i < l, j >= 0; i++, j--)
    {
        soma += matriz[i][j];
    }
    return soma;
}