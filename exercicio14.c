// Escreva um programa que leia um vetor de números inteiros e encontre o menor número presente no vetor utilizando a estrutura de repetição for.

#include <stdio.h>
#include <stdlib.h>

void PreencheVetor(int *vetor, int size);
int MaxVetor(int *vetor, int size);

int main(void)
{
    int size;
    printf("Digite tamanho do vetor: ");
    scanf("%d", &size);

    int *vetor = (int *)malloc(sizeof(int) * size);

    PreencheVetor(vetor, size);
    int max = MaxVetor(vetor, size);
    printf("Maior numero = %d\n", max);

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

int MaxVetor(int *vetor, int size)
{
    int i, max = 0;
    for (i = 0; i < size; i++)
    {
        if (vetor[i] > max)
        {
            max = vetor[i];
        }
    }
    return max;
}