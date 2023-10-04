#include <stdio.h>
#include "TAD.h"

Fraction setFraction(int numerador, int denominador) {
    Fraction p1;
    p1.numerador = numerador;
    p1.denominador = denominador;
    return p1;
}

Fraction multFraction(Fraction p1, Fraction p2) {
    Fraction answeredFrac;
    answeredFrac.numerador = p1.numerador * p2.numerador;
    answeredFrac.denominador = p1.denominador * p2.denominador;
    return answeredFrac;
}

Fraction divideFraction(Fraction p1, Fraction p2) {
    Fraction answeredFrac;
    answeredFrac.numerador = p1.numerador * p2.denominador;
    answeredFrac.denominador = p1.denominador * p2.numerador;
    return answeredFrac;
}