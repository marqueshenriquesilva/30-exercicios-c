/* Faça um programa que verifique se um número é par ou ímpar. */

#include <stdio.h>

int eh_par(int num);

int main(void)
{
    int num;

    // Entrada do usuario
    printf("Numero: ");
    scanf("%d", &num);

    // Exibe resposta
    if (eh_par(num))
        printf("O numero %d eh par\n", num);
    else
        printf("O numero %d eh impar\n", num);

    return 0;
}

int eh_par(int num)
{
    // Verifica se numero eh par ou impar
    // Retorna 0 para impar e 1 para par
    if (num % 2)
        return 0;
    return 1;
}
