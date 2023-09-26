// Leia uma matriz 4 x 4 e escreva a localização (linha e coluna) do maior valor.

#include <stdio.h>

int main() {

    int matrix_of_nums[4][4] = {
        {1,2,3,4},
        {6,7,8,9},
        {11,19,13,14},
        {16,17,18,13},  
    };

    int matrix_of_nums_lines = 4, matrix_of_nums_cols = 4;

    int maxValue = matrix_of_nums[0][0], maxValuePositionLine = 0, maxValuePositionCol = 0;

    for(int l = 0; l < matrix_of_nums_lines; l++) {
        for(int c = 0; c < matrix_of_nums_cols; c++) {
            if(matrix_of_nums[l][c] > maxValue) {
                maxValue = matrix_of_nums[l][c];
                maxValuePositionLine = l;
                maxValuePositionCol = c;
            }
        };
    }

    printf("The biggest value is %d and you gonna find it in line %d e col %d \n", maxValue, maxValuePositionLine, maxValuePositionCol);

    return 0;

}