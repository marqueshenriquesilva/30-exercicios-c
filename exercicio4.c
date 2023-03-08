/* Escreva um programa que calcule o fatorial de um número e exiba o resultado utilizando a estrutura de repetição while. */

#include <stdio.h>

int main(void)
{
    int n, sum = 1;
    printf("Digite numero: ");
    scanf("%d", &n);

    // Calcula fatorial
    while (n >= 1)
    {
        sum *= n;
        n--;
    }

    printf("Soma = %d\n", sum);

    return 0;
}
