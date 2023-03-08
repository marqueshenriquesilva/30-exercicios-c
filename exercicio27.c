// Implemente um programa que leia um vetor de números inteiros e calcule a soma dos números ímpares presentes no vetor utilizando a estrutura de repetição while.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tam, i, soma = 0;
    printf("Digite tamanho do vetor: ");
    scanf("%d", &tam);

    int *vetor = malloc(tam * sizeof(int));
    
    // Preenche vetor
    for (i = 0; i < tam; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &vetor[i]);
    }

    // Calcula soma
    i = 0;
    while (i < tam)
    {
        if (vetor[i] % 2)
            soma += vetor[i];
        i++;
    }

    printf("Soma dos impares: %d\n", soma);

    return 0;
}
