// Escreva um programa que leia um vetor de números inteiros e exiba a soma de todos os números pares utilizando a estrutura de repetição for.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Usuario insere tamanho do array
    int tam;
    printf("Entre com numero de elementos: ");
    scanf("%d", &tam);

    // Inicializacao do array
    int *vetor = malloc(tam * sizeof(int));

    // Usuario insere valores do array
    int i = 0;
    while (i < tam)
    {
        printf("Entre com numero[%d]: ", i);
        scanf("%d", vetor + i);
        i++;
    }

    // Calcula a soma
    int sum = 0;
    for (i = 0; i < tam; i++)
    {
        if ( ! (vetor[i] % 2))
        {
            sum += vetor[i];
        }
    }

    // Exibe resultado
    printf("Soma = %d\n", sum);

    free(vetor);

    return 0;
}
