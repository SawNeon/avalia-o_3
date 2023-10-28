#include <stdio.h>
#include <string.h>
void copiar_string(char* origem, char* destino) {
    strcpy(origem, destino);
}
int main(void) {
    char origem[25] = "FLAMENGOOO!!!";
    char destino[25] = "GOOOOL!!";
    copiar_string(destino, origem);
    printf("String1: %s\n", origem);
    printf("String2: %s\n", destino);

return 0;
}