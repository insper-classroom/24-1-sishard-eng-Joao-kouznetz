#include <stdio.h>
#include <stdlib.h>
#include "macros_correcoes.h"
/* Copia string e retorna uma nova string */
/* Faça sua solução aqui!*/
/* Pode alterar tudo, inclusive o retorno*/
/* Calcula o comprimento de uma string */
int mystrlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

/* Copia string e retorna uma nova string */
char *mystrcpy(char *stroriginal)
{
    int len = mystrlen(stroriginal) + 1;                // +1 para o caractere \0
    char *copiada = (char *)malloc(len * sizeof(char)); // Alocando espaço necessário
    if (copiada == NULL)
    {
        fprintf(stderr, "Erro de alocação de memória\n");
        exit(EXIT_FAILURE);
    }
    int i = 0;
    while (stroriginal[i] != '\0')
    {
        copiada[i] = stroriginal[i];
        i++;
    }
    copiada[i] = '\0'; // Adicionando o caractere nulo ao final da nova string
    return copiada;
}

int main(int argc, char *argv[])
{
    char *strcopia;

    char *s1 = "AAAAA";
    char *t1 = mystrcpy(s1);
    assertEquals("Teste 1", strcmp(s1, t1), 0);
    assertDifferent("Teste 1 - endereço diferente", s1, t1);
    free(t1);

    s1 = "";
    t1 = mystrcpy(s1);
    assertEquals("Teste 2", strcmp(s1, t1), 0);
    assertDifferent("Teste 2 - endereço diferente", s1, t1);
    free(t1);

    s1 = "AaAa123384739jlkfjdsl";
    t1 = mystrcpy(s1);
    assertEquals("Teste 3", strcmp(s1, t1), 0);
    assertDifferent("Teste 3 - endereço diferente", s1, t1);
    free(t1);

    s1 = "Aa00asdsada";
    t1 = mystrcpy(s1);
    assertEquals("Teste 4", strcmp(s1, t1), 0);
    assertDifferent("Teste 4 - endereço diferente", s1, t1);
    free(t1);

    s1 = "0asgfd";
    t1 = mystrcpy(s1);
    assertEquals("Teste 5", strcmp(s1, t1), 0);
    assertDifferent("Teste 5 - endereço diferente", s1, t1);
    free(t1);

    printSummary

        return 0;
}
