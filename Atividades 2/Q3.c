// ⊙ Fa ̧ca um programa que pe ̧ca uma valor e imprima a soma de todos os n ́umeros de 1 at ́e o valor
// informado. Por exemplo, se o valor informado for 6, o resultado ser ́a 21, ou seja, 1 + 2 + 3 + 4 + 5 + 6.

#include <stdio.h>

int main() {
    int num, i, result = 0;

    printf("Digite um número: \n");
    scanf("%d", &num);

    for(int i = 1; i <= num; i ++) {
        result = result + i;
    }

    printf("O resultado final é %d \n", result);

    return 0;
}