// Escreva um programa que leia uma string e exiba a string sem as vogais utilizando a estrutura de repetição for.
#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 200

int main(void)
{
    char s[MAX_LIMIT];
    char vogais[] = "AEIOUaeiou";
    int i, j;

    printf("String: ");
    fgets(s, MAX_LIMIT, stdin);
    s[strcspn(s, "\n")] = 0;

    // Passa pela string mas nao imprime vogais
    for (i = 0; i < strlen(s); i++)
    {
        for (j = 0; j < strlen(vogais); j++)
        {
            if (s[i] == vogais[j])
                break;
        }
        if (j >= strlen(vogais))
            printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}
