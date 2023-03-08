// Implemente um programa que leia duas matrizes de números inteiros e calcule a soma das duas matrizes, exibindo o resultado na tela.

#include <stdio.h>
#include <stdlib.h>

void LerMatriz(int *mat, int m, int n);
void SomarMatrizes(int *a, int *b, int *c, int m, int n);
void ExibirMatriz(int *mat, int m, int n);

int main(void)
{
    int m, n, *m1, *m2, *m3;

    printf("Dimensao m das matrizes: ");
    scanf("%d", &m);
    printf("Dimensao n das matrizes: ");
    scanf("%d", &n);

    m1 = (int *)malloc(sizeof(int) * m * n);
    m2 = (int *)malloc(sizeof(int) * m * n);
    m3 = (int *)malloc(sizeof(int) * m * n);

    printf("\nPrimeira matriz\n");
    LerMatriz(m1, m, n);
    printf("\nSegunda matriz\n");
    LerMatriz(m2, m, n);

    SomarMatrizes(m1, m2, m3, m, n);

    printf("Resultado\n");
    ExibirMatriz(m3, m, n);

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

void SomarMatrizes(int *a, int *b, int *c, int m, int n)
{
    // Soma valores de Aij com Bij e escreve na matriz C
    int i, j, k;
    for (i = 0; i < m; i++)
    {
        k = i*n;
        for (j = 0; j < n; j++)
        {
            c[k + j] = a[k + j] + b[k + j];
        }
    }
}

void ExibirMatriz(int *mat, int m, int n)
{
    // Exibe valores de matriz de tamanho mxn
    int i, j, k;
    for (i = 0; i < m; i++)
    {
        k = i * n;
        for (j = 0; j < n; j++)
        {
            printf("%5d ", mat[k + j]);
        }
        printf("\n");
    }
}