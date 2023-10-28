#include <stdio.h>

int main() {

  int maxlinhas, maxcolunas;

  printf("Digite o numero de linhas da Matriz:");
  scanf("%d", &maxlinhas);

  printf("Digite o numero de Colunas da Matriz:");
  scanf("%d", &maxcolunas);

  int matriz[maxlinhas][maxcolunas];

  printf("Digite os elementos da Matriz: \n");
  for (int i = 0; i < maxlinhas; i++) {
    for (int j = 0; j < maxcolunas; j++) {
      scanf("%d", &matriz[i][j]);
    }

    printf("\n");
  }
  printf("elementos da Matriz: \n");
  for (int i = 0; i < maxlinhas; i++) {
    for (int j = 0; j < maxcolunas; j++) {
      printf("[%d] ", matriz[i][j]);
    }

    printf("\n");
  }

  printf("elementos inversos da Matriz: \n");
  for (int j = 0; j < maxcolunas; j++) {
    for (int i = 0; i < maxlinhas; i++) {

      printf("[%d] ", matriz[i][j]);
    }

    printf("\n");
  }

return 0;
}