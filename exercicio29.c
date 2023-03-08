// Crie um programa que leia uma matriz de números inteiros e verifique se ela é diagonal (ou seja, se todos os elementos fora da diagonal principal são iguais a zero).

#include <stdio.h>
#include <stdlib.h>

void PreencherMatriz(int *matriz[], int l, int c);
void ExibirMatriz(int *matriz[], int l, int c);
int EhMatrizDiagonal(int *matriz[], int l, int c);



// Eh possivel simplificar bastante este codigo, mas optei pelo metodo que usei por que acredito ser mais "completo"
int main(void)
{
    int l, c, i, j, soma = 0, simetrica;

    // Tamanho da matriz
    printf("Numero de linhas e colunas: ");
    scanf("%d", &l);
    c = l;

    // Inicializa matrizes
    int *matriz[l];

    for (i = 0; i < l; i++)
        matriz[i] = (int*)malloc(c * sizeof(int));

    PreencherMatriz(matriz, l, c);
    ExibirMatriz(matriz, l, c);

    printf("\n");
    if (EhMatrizDiagonal(matriz, l, c))
        printf("Matriz eh diagonal\n");
    else
        printf("Matriz nao eh diagonal\n");

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

int EhMatrizDiagonal(int *matriz[], int l, int c)
{
    // Retorna se matriz eh diagonal
    int i, j, diagonal = 1;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i != j)
            {
                if (matriz[i][j] != 0)
                {
                    diagonal = 0;
                    return diagonal;
                }
            }
        }
    }
    return diagonal;
}

