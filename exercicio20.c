// Crie um programa que leia uma string e exiba a string invertida na tela utilizando a estrutura de repetição while.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 200

int main(void)
{
    char s[MAX_LIMIT];

    // Input de string
    printf("String: ");
    fgets(s, MAX_LIMIT, stdin);
    s[strcspn(s, "\n")] = 0;

    int i;
    i = strlen(s);
    while (i >= 0)
    {
        printf("%c", s[i]);
        i--;
    }

    printf("\n");

    return 0;
}
