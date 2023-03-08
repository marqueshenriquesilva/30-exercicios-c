// Crie um programa que leia uma matriz de números inteiros e verifique se ela é simétrica (ou seja, se ela é igual à sua transposta).

#include <stdio.h>
#include <stdlib.h>

void PreencherMatriz(int *matriz[], int l, int c);
void ExibirMatriz(int *matriz[], int l, int c);
void ExibirDiagonal(int *matriz[], int l, int c);
void TransporMatriz(int *matriz[], int l, int c, int *trans[]);
int MatrizesSimetricas(int *matriz[], int l, int c, int *trans[]);


// Eh possivel simplificar bastante este codigo, mas optei pelo metodo que usei por que acredito ser mais "completo"
int main(void)
{
    int l, c, i, j, soma = 0, simetrica;

    // Tamanho da matriz
    printf("Numero de linhas e colunas: ");
    scanf("%d", &l);
    printf("Numero de linhas e colunas: ");
    scanf("%d", &c);

    // Inicializa matrizes
    int *matriz[l];
    int *trans[c];

    for (i = 0; i < l; i++)
        matriz[i] = (int*)malloc(c * sizeof(int));
    
    for (i = 0; i < c; i++)
        trans[i] = (int*)malloc(l * sizeof(int));

    PreencherMatriz(matriz, l, c);
    printf("Matriz original:\n");
    ExibirMatriz(matriz, l, c);

    printf("\n");
    TransporMatriz(matriz, l, c, trans);
    printf("Matriz transposta:\n");
    ExibirMatriz(trans, c, l);

    simetrica = MatrizesSimetricas(matriz, l, c, trans);

    printf("\n");
    if (simetrica)
    {
        printf("Matriz eh simetrica\n");
    }
    else
    {
        printf("Matriz nao eh simetrica\n");
    }

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

void TransporMatriz(int *matriz[], int l, int c, int *trans[])
{
    // Transpoe matriz
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            trans[j][i] = matriz[i][j];
        }
    }
}

int MatrizesSimetricas(int *matriz[], int l, int c, int *trans[])
{
    // Verifica se matriz original eh igual a matriz transposta
    if (l != c)
    {
        return 0;
    }

    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (trans[i][j] != matriz[i][j])
                return 0;
        }
    }

    return 1;
}
