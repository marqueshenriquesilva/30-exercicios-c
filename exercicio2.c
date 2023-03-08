/* Escreva um programa que calcule a média aritmética de três notas e imprima se o aluno foi aprovado ou reprovado, considerando que a nota mínima para aprovação é 6. */

#include <stdio.h>
#define T 3

void insere_notas(float notas[T]);
float calcula_media(float notas[T]);
int aprovado(float media, float nota_min);

int main(void)
{
    float nota, notas[T], media, nota_min = 6.0;
    int i;
    
    insere_notas(notas);
    media = calcula_media(notas);

    printf("Media = %2.2f\n", media);

    if (aprovado(media, nota_min))
        printf("Aluno aprovado\n");
    else
        printf("Aluno reprovado\n");

    return 0;
}

void insere_notas(float notas[T])
{
    // Insere notas no array notas
    int i;
    for (i = 0; i < T; i++)
    {
        printf("Digite nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }
}

float calcula_media(float notas[T])
{
    // Calcula media das notas
    int i;
    float sum;
    for (i = 0; i < T; i++)
    {
        sum += notas[i];
    }
    return sum / T;
}

int aprovado(float media, float nota_min)
{
    if (media < nota_min)
        return 0;
    return 1;
}