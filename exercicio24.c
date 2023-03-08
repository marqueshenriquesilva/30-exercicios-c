// Implemente um programa que leia um vetor de números inteiros e calcule a média aritmética dos números pares presentes no vetor, exibindo o resultado na tela.

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

    // Calcula a soma e quantidade de numeros pares
    int sum = 0, num_pares = 0;
    for (i = 0; i < tam; i++)
    {
        if ( ! (vetor[i] % 2))
        {
            sum += vetor[i];
            num_pares++;
        }
    }

    // Calcula media aritmetica
    float media;
    media = sum / (float) num_pares;

    // Exibe resultado
    printf("Media = %5.2f\n", media);

    free(vetor);

    return 0;
}
