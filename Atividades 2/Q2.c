// 2. ⊙ Fa ̧ca um programa que simule a multiplica ̧c ̃ao atrav ́es de adi ̧c ̃oes. Para tal ser ̃ao pedidos os dois
// operandos. Por exemplo se for informado 3 e 4, dever ́a ser calculado, atrav ́es de soma, 3∗4, ou seja, 12.
// Este c ́alculo  ́e feito somando o primeiro valor informado por ele mesmo o n ́umero de vezes representada
// pelo segundo n ́umero. Nesse exemplo, o trˆes seria somado quatro vezes: 3+3+3+3, resultado 12.

#include <stdio.h>

int main() {
    int num1, num2, i, result = 0;

    printf("Digite dois números separados por espaço, o primeiro o valor a ser multiplicado e o segundo o número de vezes: \n");
    scanf("%d %d", &num1, &num2);

    for(int i = 1; i <= num2; i ++) {
        result = result + num1;
    }

    printf("O resultado final é %d \n", result);

    return 0;
}