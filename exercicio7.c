// Implemente um programa que leia uma string e verifique se ela é um palíndromo (ou seja, se ela é igual ao seu inverso) utilizando a estrutura condicional if.

#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 200

int main(void)
{
    char s[MAX_LIMIT];

    // Usuario insere string
    printf("String: ");
    fgets(s, MAX_LIMIT, stdin);
    s[strcspn(s, "\n")] = 0;

    // Calcula tamanho da string
    int max = strlen(s);

    // Itera do inicio ate o fim e do fim ate o inicio
    int i;
    for (i = 0; i < max; i++, max--)
    {
        // Retorna se houver caracteres diferentes
        if (s[i] != s[max - 1])
        {
            printf("Nao eh palindromo\n");
            return 0;
        }
    }

    printf("Eh palindromo\n");

    return 0;
}