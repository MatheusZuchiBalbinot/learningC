#include <stdio.h>

long int fatorial(long int digit) {
    if(digit == 1 || digit == 0) {
        return 1;
    } else {
        return digit * fatorial(digit - 1);
    }
}

int main() {

    long int result = fatorial(21);
    printf("\n %li \n", result);

    return 0;
}