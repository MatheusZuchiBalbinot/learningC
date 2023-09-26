#include <stdio.h>

typedef struct data {
    int dia, mes, ano;
} Data;

int compareData(Data data1, Data data2) {

    int data1_days = (data1.ano * 365) + (data1.mes * 30) + data1.dia;
    int data2_days = (data2.ano * 365) + (data2.mes * 30) + data2.dia;

    if(data1_days > data2_days) {
        return 1;
    } else if (data2_days > data1_days) {
        return -1;
    } else {
        return 0;
    }
}

int main() {

    int result = 0;

    Data data3 = {13,12,2023};
    Data data4 = {13,12,2023};

    result = compareData(data3, data4);
    
    if(result == 1) {
        printf("A primeira data é maior que a segunda \n");
    } else if (result == -1) {
        printf("A segunda data é maior que a primeira \n");
    } else {
        printf("Ambas as datas são iguais \n");
    }

    return 0;
}