// Escreva um programa que leia uma string e verifique se ela contém a substring "casa" utilizando a estrutura condicional if.

#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 200

int main(void)
{
    char s[MAX_LIMIT];
    char p[] = "casa";

    // Input de string
    printf("String: ");
    fgets(s, MAX_LIMIT, stdin);
    s[strcspn(s, "\n")] = 0;

    // Itera ate fim de string inserida
    int i = 0, j = 0;
    while (s[i] != '\0')
    {
        // Verifica se primeiro caracter de s combina com o de p
        j = 0;
        while (s[i + j] == p[j])
        {
            // Continua iterando ate comprovar que string p esta inserida em s
            j++;
            if (j == strlen(p))
            {
                printf("A string %s contem a substring %s\n", s, p);
                return 0;
            }
        }
        i++;
    }
    printf("A string: %s; nao contem a substring %s.\n", s, p);

    return 0;
}
