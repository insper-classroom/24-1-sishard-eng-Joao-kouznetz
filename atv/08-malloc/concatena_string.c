#include <stdio.h>
#include <stdlib.h>
#include "macros_correcoes.h"

int mystrlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}
/* Recebe duas strings e concatena em uma terceira */
char *mystrcat(char *str1, char *str2)
{
    int len1 = mystrlen(str1);
    int len2 = mystrlen(str2);
    int totalLen = len1 + len2 + 1; // +1 para o caractere nulo

    char *concatenada = (char *)malloc(totalLen * sizeof(char)); // Alocando espaço necessário
    if (concatenada == NULL)
    {
        fprintf(stderr, "Erro de alocação de memória\n");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    int j = 0;

    // Copiando a primeira string
    while (str1[i] != '\0')
    {
        concatenada[i] = str1[i];
        i++;
    }

    // Concatenando a segunda string
    while (str2[j] != '\0')
    {
        concatenada[i + j] = str2[j];
        j++;
    }

    concatenada[i + j] = '\0'; // Adicionando o caractere nulo ao final da nova string

    return concatenada;
}

int main(int argc, char *argv[])
{
#define teste1 "str1"
#define teste2 "str2"
#define teste3 "0 str 3"

    char *res = mystrcat(teste1, teste2);
    assertEquals("teste 1", strcmp(res, teste1 teste2), 0);
    free(res);

    res = mystrcat(teste1, teste1);
    assertEquals("teste 2", strcmp(res, teste1 teste1), 0);
    free(res);

    res = mystrcat(teste1, teste3);
    assertEquals("teste 3", strcmp(res, teste1 teste3), 0);
    free(res);

    res = mystrcat(teste3, teste1);
    assertEquals("teste 4", strcmp(res, teste3 teste1), 0);
    free(res);

    res = mystrcat("", teste2);
    assertEquals("teste vazio 1", strcmp(res, teste2), 0);
    free(res);

    res = mystrcat(teste1, "");
    assertEquals("teste vazio 2", strcmp(res, teste1), 0);
    free(res);

    res = mystrcat("", "");
    assertEquals("teste vazio 3", strcmp(res, ""), 0);
    free(res);

    printSummary

        return 0;
}
