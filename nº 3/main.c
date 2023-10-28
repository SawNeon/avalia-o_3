#include <stdio.h>
#include <stdlib.h>

int saoMatrizesOpostas(int **matriz1, int **matriz2, int linhas, int colunas) {
    if (linhas != colunas) {
        return 0;
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz1[i][j] + matriz2[i][j] != 0) {
                return 0;
            }
        }
    }

    return 1;
}

void imprimirMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas e colunas das matrizes: ");
    scanf("%d %d", &linhas, &colunas);

    if (linhas <= 0 || colunas <= 0) {
        printf("O número de linhas e colunas deve ser maior que zero.\n");
        return 1;
    }

    int **matriz1 = (int **)malloc(linhas * sizeof(int *));
    int **matriz2 = (int **)malloc(linhas * sizeof(int *));

    for (int i = 0; i < linhas; i++) {
        matriz1[i] = (int *)malloc(colunas * sizeof(int));
        matriz2[i] = (int *)malloc(colunas * sizeof(int));
    }

    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("Matriz 1:\n");
    imprimirMatriz(matriz1, linhas, colunas);
    printf("Matriz 2:\n");
    imprimirMatriz(matriz2, linhas, colunas);

    if (saoMatrizesOpostas(matriz1, matriz2, linhas, colunas)) {
        printf("As matrizes são opostas.\n");
    } else {
        printf("As matrizes não são opostas.\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
    }
    free(matriz1);
    free(matriz2);

    return 0;
}
