// Crie um programa que leia uma string e exiba o número de vogais presentes nessa string utilizando a estrutura de repetição for.

#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 200

int main(void)
{
    char s[MAX_LIMIT];
    char v[] = "aeiouAEIOU";
    int nv = 0;

    // Input de string
    printf("String: ");
    fgets(s, MAX_LIMIT, stdin);
    s[strcspn(s, "\n")] = 0;

    int s_size = strlen(s);
    int v_size = strlen(v);

    int v_sum = 0;

    // Itera pela string s
    int i, j;
    for (i = 0; i < s_size; i++)
    {
        // Para cada letra, verifica se eh uma vogal
        for (j = 0; j < v_size; j++)
        {
            if (s[i] == v[j])
            {
                v_sum++;
                break;
            }
        }
    }

    printf("A quantidade de vogais da string %s eh igual a: %d\n", s, v_sum);

    return 0;
}
