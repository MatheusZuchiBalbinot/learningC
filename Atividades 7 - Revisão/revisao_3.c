#include <stdio.h>

int main() {

    int MATRIX_COL = 4, MATRIX_ROW = 4;
    int contador;

    int matrix[4][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};

    for(int i = 0; i < MATRIX_COL; i++) {
        for(int j = 0; j < MATRIX_ROW; j++) {
            contador++;
            matrix[i][j] = contador;
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < MATRIX_COL; i++) {
        for(int j = 0; j < MATRIX_ROW; j++) {
            if(j > i) {
                printf("%d \t", matrix[i][j]);
            } else {
                printf("%d \t", 0);
            }
        }
        printf("\n");
    }

    return 0;
}