/* Implemente um programa que leia um número inteiro e imprima todos os números pares até este número utilizando a estrutura de repetição for. */

#include <stdio.h>

int main(void)
{
    int n;
    printf("Digite numero: ");
    scanf("%d", &n);

    // Imprimi numeros pares POSITIVOS ate numero digitado
    int i;
    for (i = 0; i < n; i++)
        if (!(i % 2))
            printf("%d ", i);

    printf("\n");

    return 0;
}
