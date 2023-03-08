// Escreva um programa que leia um vetor de números inteiros e exiba o segundo maior número presente no vetor utilizando a estrutura de repetição for.

#include <stdio.h>
#include <stdlib.h>

void InserirVetor(int vetor[], int tam);
void ExibirVetor(int vetor[], int tam);
int MaiorVetor(int vetor[], int tam);
int SegundoMaiorVetor(int vetor[], int tam, int maior);



int main(void)
{
    int tam, maior, s_maior;

    printf("Entre com tamanho do vetor: ");
    scanf("%d", &tam);

    int *vetor = malloc(tam * sizeof(int));

    InserirVetor(vetor, tam);

    printf("Vetor: ");
    ExibirVetor(vetor, tam);

    maior = MaiorVetor(vetor, tam);

    printf("Maior: %d\n", maior);

    s_maior = SegundoMaiorVetor(vetor, tam, maior);

    printf("Segundo maior: %d\n", s_maior);


    return 0;
}



void InserirVetor(int vetor[], int tam)
{
    // Usuario insere numeros no vetor
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &vetor[i]);
    }
}

void ExibirVetor(int vetor[], int tam)
{
    // Exibi vetor de uma linha
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    } 
    printf("\n");
}

int MaiorVetor(int vetor[], int tam)
{
    // Acha maior numero no vetor
    int i, maior = 0;
    for (i = 0; i < tam; i++)
    {
        if (vetor[i] > maior)
            maior = vetor[i];
    }
    return maior;
}

int SegundoMaiorVetor(int vetor[], int tam, int maior)
{
    // Acha segundo maior numero no vetor
    int i, s_maior = 0;
    for (i = 0; i < tam; i++)
    {
        if (vetor[i] > s_maior && maior > vetor[i])
            s_maior = vetor[i];
    }
    return s_maior; 
}
