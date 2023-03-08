// Crie um programa que leia uma matriz de números inteiros e exiba o número de linhas e colunas que possuem apenas elementos pares

#include <stdio.h>
#include <stdlib.h>

void PreencherMatriz(int *matriz[], int l, int c);
void ExibirMatriz(int *matriz[], int l, int c);
int MatrizLinhasPar(int *matriz[], int l, int c);
int MatrizColunasPar(int *matriz[], int l, int c);



int main(void)
{
    int l, c, i, j, linhas_par = 0, colunas_par = 0;

    // Tamanho da matriz
    printf("Numero de linhas e colunas: ");
    scanf("%d", &l);
    printf("Numero de linhas e colunas: ");
    scanf("%d", &c);

    // Inicializa matrizes
    int *matriz[l];

    for (i = 0; i < l; i++)
        matriz[i] = (int*)malloc(c * sizeof(int));

    PreencherMatriz(matriz, l, c);
    ExibirMatriz(matriz, l, c);
    linhas_par = MatrizLinhasPar(matriz, l, c);
    printf("\nLinhas par = %d\n", linhas_par);
    colunas_par = MatrizColunasPar(matriz, l, c);
    printf("\nColunas par = %d\n", colunas_par);

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

int MatrizLinhasPar(int *matriz[], int l, int c)
{
    // Verifica se linhas de matriz possui apenas elementos pares
    int i, j, linhas_par = 0;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (matriz[i][j] % 2)
                break;
        }
        if (j == c)
            linhas_par++;
    }
    return linhas_par;
}

int MatrizColunasPar(int *matriz[], int l, int c)
{
    // Verifica se colunas de matriz possui apenas elementos pares
    int i, j, colunas_par = 0;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (matriz[j][i] % 2)
                break;
        }
        if (j == c)
            colunas_par++;
    }
    return colunas_par;
}