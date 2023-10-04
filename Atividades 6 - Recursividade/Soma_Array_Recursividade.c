#include <stdio.h>

int sumOfAVetor(int num[], int n) {
    if(n == 0) {
        return num[0];
    } else {
        return num[n] + sumOfAVetor(num, n-1);
    }
}

int main() {

    int vet[] = {1, 5, 7, 9};

    int result = sumOfAVetor(vet, 4);
    printf("\n %d \n", result);

    return 0;
}