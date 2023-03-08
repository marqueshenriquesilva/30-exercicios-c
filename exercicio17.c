// Crie um programa que leia uma string e exiba o número de ocorrências da letra 'e' presente nessa string utilizando a estrutura de repetição while.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LIMIT 200

int main(void)
{
    char s[MAX_LIMIT];

    printf("String: ");
    fgets(s, MAX_LIMIT, stdin);
    s[strcspn(s, "\n")] = 0;

    int i = 0, e_vezes = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'e')
            e_vezes++;
        i++;
    }

    printf("Vezes que a letra e aparece: %d\n", e_vezes);

    return 0;
}
