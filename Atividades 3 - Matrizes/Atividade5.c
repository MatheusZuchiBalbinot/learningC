// Leia uma matriz 4 x 4 e imprima a triangular superior.

#include <stdio.h>

int main() {

    int matrix_of_nums[5][5] = {
        {1,2,3,4},
        {6,7,8,9},
        {11,12,13,14},
        {16,17,18,19},
    };

    int matrix_of_nums_lines = 4, matrix_of_nums_cols = 4;

    for(int l = 0; l < matrix_of_nums_lines; l++) {
        for(int c = 0; c < matrix_of_nums_cols; c++) {
            if(l < c) {
                matrix_of_nums[l][c] = 1;
            } else {
                matrix_of_nums[l][c] = 0;
            }
            printf("%d ", matrix_of_nums[l][c]);
        };
        printf("\n");
    }

    return 0;

}