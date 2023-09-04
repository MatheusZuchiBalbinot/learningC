// ⊙ Fa ̧ca um programa que pe ̧ca o sal ́ario e o n ́umero de filhos dos habitantes de uma regi ̃ao. Quando
// o sal ́ario informado for menor que zero, as entradas s ̃ao finalizadas e ser ̃ao apresentadas as m ́edias
// salarial e de filhos informados. Exemplo:
// Sal ́ario: 1500
// Filhos: 2
// Sal ́ario: 3245
// Filhos: 2
// Sal ́ario: -1
// M ́edia sal ́arios: 2372.5
// M ́edia filhos: 2.0

#include <stdio.h>

int main() {

    int wage, children, totalFamilies = 0;
    double averageWage = 0.0, averageChildren = 0.0;

    while(1) {

        printf("Salário: \n");
        scanf("%d", &wage);

        if (wage < 0) {
            break;
        }

        printf("Filhos: \n");
        scanf("%d", &children);

        averageWage += wage;
        averageChildren += children;
        totalFamilies++;
    }

    if (totalFamilies > 0) {
        averageWage /= totalFamilies;
        averageChildren /= totalFamilies;
        printf("Média dos salários: %.2lf\n", averageWage);
        printf("Média de filhos: %.2lf\n", averageChildren);
    } else {
        printf("Nenhum dado inserido.\n");
    }
    
    return 0;
}