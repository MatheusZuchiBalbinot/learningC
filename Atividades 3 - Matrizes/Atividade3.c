// Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. 
// Imprima, ao final, a matriz obtida.

#include <stdio.h>

int main() {

    int matrix_of_nums[5][5] = {};

    int matrix_of_nums_lines = 5, matrix_of_nums_cols = 5;

    for(int l = 0; l < matrix_of_nums_lines; l++) {
        for(int c = 0; c < matrix_of_nums_cols; c++) {
            if(l != c) {
                matrix_of_nums[l][c] = 0;
            } else if(l == c) {
                matrix_of_nums[l][c] = 1;
            }
            printf("%d ", matrix_of_nums[l][c]);
        };
        printf("\n");
    }

    return 0;

}