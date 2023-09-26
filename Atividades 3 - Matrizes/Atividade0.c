// Exercícios
// 1 - Leia uma matriz 4 x 4 e imprima a diagonal principal.
// 2 - Leia uma matriz 4 x 4 e escreva a localização (linha e coluna) do maior valor.
// 3 - Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Imprima, ao final, a matriz obtida.
// 4 - Faça um programa que preenche uma matriz 5 x 5 com o produto da posição da linha e da coluna de cada elemento. Em seguida, imprima.
// 5 - Leia uma matriz 4 x 4 e imprima a triangular superior.


#include <stdio.h>

int main() {

    int matrix_of_nums[4][4] = {
        {1,2,3,4},
        {6,7,8,9},
        {11,12,13,14},
        {16,17,18,19},  
    };
    
    int matrix_of_nums_lines = 4, matrix_of_nums_cols = 4;

    for(int l = 0; l < matrix_of_nums_lines; l++) {
        for(int c = 0; c < matrix_of_nums_cols; c++) {
            printf("%d ", matrix_of_nums[l][c]);
        };
        printf("\n");
    }

    return 0;

}