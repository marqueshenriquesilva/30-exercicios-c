/* Crie um programa que leia um número inteiro e exiba sua tabuada de multiplicação utilizando a estrutura de repetição for. */

#include <stdio.h>

int main(void)
{
    int n, i;
    printf("Digite numero: ");
    scanf("%d", &n);

    // Considerei que a "tabuada de multiplicacao" se refere a tabuada do 1 ate 10
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n*i);

    return 0;
}
