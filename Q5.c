// ⊘ Fa ̧ca um programa para calcular o fatorial de um n ́umero dado. O fatorial de um n ́umero n  ́e
// n × (n − 1) × (n − 2) × . . . × 1, por defini ̧c ̃ao o fatorial de 0 e 1  ́e 1. Por exemplo, o fatorial de 5  ́e
// 120, ou seja, 5 × 4 × 3 × 2 × 1 (perceba que n ̃ao  ́e necess ́ario fazer a  ́ultima multiplica ̧c ̃ao j ́a que 1  ́e o
// elemento neutro da multiplica ̧c ̃ao).

#include <stdio.h>

int main() {
    int num, factorial = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Não existe fatorial de um número negativo.\n");
    }
    else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        printf("O fatorial de %d é %d \n", num, factorial);
    }

    return 0;
}