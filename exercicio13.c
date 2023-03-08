// Implemente um programa que leia uma matriz de números inteiros e exiba o maior número presente na matriz utilizando a estrutura de repetição while.

#include <stdio.h>
#include <stdlib.h>

void LerMatriz(int *mat, int m, int n);
int MatrizMaximo(int *mat, int m, int n);

int main(void)
{
    int m, n, *matrix;

    printf("Dimensao m da matriz: ");
    scanf("%d", &m);
    printf("Dimensao n da matriz: ");
    scanf("%d", &n);

    matrix = (int *)malloc(sizeof(int) * m * n);

    LerMatriz(matrix, m, n);

    int max = MatrizMaximo(matrix, m, n);

    printf("Maior numero = %d\n", max);

    return 0;
}

void LerMatriz(int *mat, int m, int n)
{
    // Le matriz de tamanho mxn
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Posicao[%d][%d]: ", i, j);
            scanf("%d", &mat[i * n + j]);
        }
        printf("\n");
    }
}

int MatrizMaximo(int *mat, int m, int n)
{
    // Encontra maior numero inteiro de matriz
    int i, j, k, max = 0;
    for (i = 0; i < m; i++)
    {
        k = i * n;
        for (j = 0; j < n; j++)
        {
            if (mat[k + j] > max)
                max = mat[k + j];
        }
    }
    return max;
}