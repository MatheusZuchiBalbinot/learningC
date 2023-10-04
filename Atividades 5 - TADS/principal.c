#include <stdio.h>
#include "TAD.h"

int main() {

    Fraction p1, p2;
    Fraction asnwerP3, answerP4;

    p1 = setFraction(1, 1);
    p2 = setFraction(2, 2);

    asnwerP3 = multFraction(p1, p2);
    answerP4 = divideFraction(p1, p2);

    printf("As atribuções de frações foram:\np1: %d %d\np2: %d %d.\nA multiplicação entre p1 e p2 é: %d %d e a divisão %d %d \n", p1.numerador, p1.denominador, p2.numerador, p2.denominador, asnwerP3.numerador, asnwerP3.denominador, answerP4.numerador, answerP4.denominador);

    return 0;
}