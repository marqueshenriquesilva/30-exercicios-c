// Crie um programa que leia um número inteiro positivo e verifique se ele é primo ou não usando a estrutura de repetição while.

#include <stdio.h>

int main(void)
{
    int num, i = 2;

    printf("Digite numero: ");
    scanf("%d", &num);

    // Testa se numero eh divisivel apenas por ele mesmo
    while (i < num && num % i)
    {
        i++;
    }

    if (i == num)
        printf("Eh primo\n");
    else
        printf("Nao eh primo\n");

    return 0;
}
