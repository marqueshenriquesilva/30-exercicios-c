// Escreva um programa que leia uma string e exiba apenas as palavras que possuem mais de cinco letras, utilizando a estrutura de repetição for.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 200



int main(void)
{
    char s[MAX_LIMIT];
    int size, i, j, rev, last = 0;

    // Input de string
    printf("String: ");
    fgets(s, MAX_LIMIT, stdin);
    s[strcspn(s, "\n")] = ' ';

    size = strlen(s);

    for (i = 0; i < size; i++)
    {
        if (s[i] == ' ')
        {
            if ((i - last) - 5 >= 0)
            {
                for (j = last; j < i; j++)
                {
                    printf("%c", s[j]);
                }
                printf("\n");
            }
            last = i + 1;
        }
    }

    return 0;
}



