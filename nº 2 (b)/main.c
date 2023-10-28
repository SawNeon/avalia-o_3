#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char**argv){
    int matriz[5][5];
    int i, j;
    int soma2=0;


    srand( time( NULL ) );

    printf( "Matriz:\n" );
    for( i = 0; i < 5; i++ ){
        for( j = 0; j < 5; j++ ){
            matriz[i][j] = 5 + rand() % 5;
            printf( "%3d", matriz[i][j] );
            if( i + j == 4 ){
                soma2 += matriz[i][j];
            }
        }
        printf( "\n" );
    }
    printf( "Soma da diagonal secundaria: %d", soma2 );
    return 0;
}