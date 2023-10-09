#include <stdio.h>

int count = 0;

int mesesParaSaque (float saldoDisponivel) {

    if(saldoDisponivel > 1000) {
        printf("%.2f \n", saldoDisponivel);
        count += 1;
        return mesesParaSaque(saldoDisponivel / 2);
    } else {
        return count;
    }
}

int main() {

    int result = mesesParaSaque(15000);

    printf("%d", result);

    return 0;
}