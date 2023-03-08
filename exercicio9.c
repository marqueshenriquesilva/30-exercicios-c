// Crie um programa que leia uma matriz de números inteiros e exiba a média aritmética de todos os elementos da matriz utilizando a estrutura de repetição while.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Input das dimensoes da matriz
    int row, col;
    printf("Entre com numero de linhas: ");
    scanf("%d", &row);
    printf("Entre com numero de colunas: ");
    scanf("%d", &col);
    printf("\n");

    // Matriz bidimensional
    int *vector = malloc(row * col * sizeof(int));

    // Usuario insere valores da matriz
    int i = 0, j = 0, number;

    // Itera por valores da matriz usando ponteiros
    while (i < row)
    {
        j = 0;
        while (j < col)
        {
            printf("Entre com numero[%d][%d]: ", i, j);
            scanf("%d", &number);
            *(vector + i*col + j) = number;
            j++;
        }
        printf("\n");
        i++;
    }

    // Calcula a soma de valores
    int sum = 0;
    float avg = 0;

    i = 0, j = 0;
    while (i < row)
    {
        j = 0;
        while (j < col)
        {
            sum += *(vector + i*col + j);
            j++;
        }
        i++;
    }

    // Calcula media
    avg = sum / ((float) row * col); 

    // Exibe resultado
    printf("Media = %5.2f\n", avg);

    free(vector);

    return 0;
}
