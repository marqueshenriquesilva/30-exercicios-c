// Crie um programa que leia uma string e substitua todas as ocorrências da letra 'a' pela letra 'b', exibindo a nova string na tela.

#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 200

void SubstituirLetra(char s[], char old, char new);

int main(void)
{
    char s[MAX_LIMIT];
    char p = 'a';

    // Input de string
    printf("String: ");
    fgets(s, MAX_LIMIT, stdin);
    s[strcspn(s, "\n")] = 0;

    SubstituirLetra(s, 'a', 'b');

    printf("%s\n", s);

    return 0;
}

void SubstituirLetra(char s[], char old, char new)
{
    // Substitui caractere antigo de string pelo novo
    int i;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == old)
        {
            s[i] = new;
        }
    }
}
