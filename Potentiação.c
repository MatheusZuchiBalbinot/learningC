#include <stdio.h>

int elevadoA(int base, int expoent) {
    if(expoent == 0){ 
        return 1;
    } else if (expoent==1) {
        return base;
    } else {
        return base * elevadoA(base, expoent - 1);
    }
}

int main() {

    int result = elevadoA(3, 7);
    printf("\n %d \n", result);

    return 0;
}