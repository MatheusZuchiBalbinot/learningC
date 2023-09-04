// ⊘ Construa um programa que simule uma calculadora simples. Primeiro  ́e informada a opera ̧c ̃ao
// desejada +, ?, ? ou /, em seguida os dois operandos e apresente o resultado da opera ̧c ̃ao. O Programa
//  ́e finalizado quando a opera ̧c ̃ao desejada for igual `a @.

#include <stdio.h>

int main() {

    printf("Calculadora Simples\n");

    while (1) {
        
        char operation;
        
        printf("Digite a operação desejada (+, -, *, / ou @ para sair): ");
        scanf(" %c", &operation);
        
        double num1 = 0, num2 = 0, result = 0;

        if (operation == '@') {
            printf("Encerrando a calculadora.\n");
            break;
        }
        else {
            
            printf("Digite, respectivamente, o primeiro e o segundo operando separados por espaço: \n");
            scanf("%lf %lf", &num1, &num2);

            if(operation == '+') {
                result = num1 + num2;
            } else if(operation == '-') {
                result = num1 - num2;
            } else if(operation == '*') {
                result = num1 * num2;
            } else if(operation == '/') {
                result = num1 / num2;
            }
        }
        printf("A operação escolhida foi %c e o resultado foi %.2f\n", operation, result);
    }
    
}