#include <stdio.h>

typedef struct fraction {
    int numerador, denominador;
} Fraction;

Fraction setFraction(int nume, int deno) {
    Fraction fractionTwo;
    fractionTwo.numerador = nume;
    fractionTwo.denominador = deno;
    return fractionTwo;
}

Fraction multFraction(Fraction fractionOne, Fraction fractionTwo) {
    Fraction answeredFraction;

    answeredFraction.numerador = fractionOne.numerador * fractionTwo.numerador;
    answeredFraction.denominador = fractionOne.denominador * fractionTwo.denominador;
    
    return answeredFraction;
}

int main() {

    Fraction result;
    Fraction secondResult;

    result = setFraction(3, 4);

    printf("O denominador é: %d e o numerador é %d. \n", result.numerador, result.denominador);

    Fraction fractionOne = {3, 4};
    Fraction fractionTwo = {5, 6};

    secondResult = multFraction(fractionOne, fractionTwo);

    printf("O resultado da multiplicação de numeradores é: %d e de denominadores é %d. \n", secondResult.numerador, secondResult.denominador);

    return 0;
}