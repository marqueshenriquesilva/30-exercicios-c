// Escreva um programa que leia um vetor de números inteiros e encontre o menor número presente no vetor utilizando a estrutura de repetição for.

#include <stdio.h>
#include <stdlib.h>

void PreencheVetor(int *vetor, int size);
int MinVetor(int *vetor, int size);

int main(void)
{
    int size;
    printf("Digite tamanho do vetor: ");
    scanf("%d", &size);

    int *vetor = (int *)malloc(sizeof(int) * size);

    PreencheVetor(vetor, size);
    int min;
    min = MinVetor(vetor, size);
    printf("Menor numero = %d\n", min);

    return 0;
}

void PreencheVetor(int *vetor, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Numero posicao[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
}

int MinVetor(int *vetor, int size)
{
    int i, min = 9999;
    for (i = 0; i < size; i++)
    {
        if (vetor[i] < min)
        {
            min = vetor[i];
        }
    }
    return min;
}
