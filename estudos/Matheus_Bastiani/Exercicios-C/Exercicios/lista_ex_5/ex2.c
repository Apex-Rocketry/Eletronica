#include <stdio.h>
#include <stdint.h>

int comprimento(char string[]) {
    int tam = 0;

    while (string[tam] != '\0') {
        tam++;
    }
    return tam;
}

int conta_palavras(char string[]) {
    int i = 0;
    int espaco = 0;
    int quantidade = 0;

    while (string[i] != '\0') {
        if (string[i] >= 'A' && string[i] <= 'z' && espaco == 0) {
            quantidade++;
            espaco = 1;
        }
        if (string[i] != ' ' && string[i + 1] == ' ') {
            espaco = 0;
        }
        i++;
    }
    return quantidade;
}

void vetor_matriz(char origem[], char destino[][20], int tam_destino) {
    int i = 0;
    int j = 0;
    int c = 0;

    while (i < tam_destino && origem[j] != '\0') {

        c = 0;

        while (origem[j] != ' ' && origem[j] != '\0') {
            destino[i][c] = origem[j];
            c++;
            j++;
        }

        destino[i][c] = '\0';

        while (origem[j] == ' ') {
            j++;
        }

        i++;
    }
}

int main(void) {

    char texto[1000] = "Permita que o usuario digite uma palavra e busque na matriz se a palavra existe no texto ";

    int quantidade = conta_palavras(texto);

    printf("Existem %d palavras no texto.\n", quantidade);

    char matriz [quantidade][20] = {};

    vetor_matriz(texto, matriz, quantidade);


    return 0;
}