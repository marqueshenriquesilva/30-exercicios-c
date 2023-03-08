// Escreva um programa que leia uma string e verifique se ela é um palíndromo considerando apenas as letras, ignorando espaços e pontuações.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_LIMIT 200

void StringStrip(char string[], char new_string[]);
int EhPalindromo(char string[]);


int main(void)
{
    char s[MAX_LIMIT];
    int size;

    // Input de string
    printf("String: ");
    fgets(s, MAX_LIMIT, stdin);
    s[strcspn(s, "\n")] = 0;

    size = strlen(s);

    char *new = malloc(size * sizeof(char));

    StringStrip(s, new);

    if (EhPalindromo(new))
        printf("Eh palindromo\n");
    else
        printf("Nao eh palindromo\n");

    return 0;
}

void StringStrip(char string[], char new_string[])
{
    // Cria string de valores alfanumericos
    int size = strlen(string);

    int i, p = 0;
    for (i = 0; i < size; i++)
    {
        if (isalnum(string[i]))
        {
            new_string[p] = string[i];
            p++;
        }
    }
}

int EhPalindromo(char string[])
{
    // Retorna se string eh palindromo ou nao
    int i;
    int max = strlen(string);
    for (i = 0; i < max; i++, max--)
    {
        // Retorna se houver caracteres diferentes
        if (string[i] != string[max - 1])
        {
            return 0;
        }
    }
    return 1;
}
