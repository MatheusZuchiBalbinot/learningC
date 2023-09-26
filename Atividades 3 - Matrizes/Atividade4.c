// Faça um programa que preenche uma matriz 5 x 5 
// com o produto da posição da linha e da coluna de cada elemento. Em seguida, imprima.

#include <stdio.h>

int main() {

    int matrix_of_nums[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25},  
    };

    int matrix_of_nums_lines = 5, matrix_of_nums_cols = 5;

    for(int l = 0; l < matrix_of_nums_lines; l++) {
        for(int c = 0; c < matrix_of_nums_cols; c++) {
            matrix_of_nums[l][c] = l * c;
            printf("%d ", matrix_of_nums[l][c]);
        };
        printf("\n");
    }

    return 0;

}