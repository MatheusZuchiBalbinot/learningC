// ⊙ Dada uma sequˆencia de n n ́umeros (um n ́umero menor ou igual `a 0 finaliza a sequˆencia), apresentar
// o porcentual de n ́umeros informados que s ̃ao maior ou igual `a 10 e menor ou igual `a 20. Exemplo:
// 5
// 6
// 11
// 21
// 0
// % entre 10 e 20: 25.00%

#include <stdio.h>

int main() {
   
	int num, insertedNumber = 0, valuesInRange = 0;
	double percentage;

	while(1) {
	    
	    printf("Digite uma sequência de números(número menor ou igual a 0 acaba com a sequência): \n");
	    
		scanf("%d", &num);
		
		if(num >= 10 && num <= 20) {
			valuesInRange += 1;
		}
		else {
			insertedNumber += 1	;
		}
		
		if(num <= 0) {
			break;
		}
	}

	if (insertedNumber > 0) {
        percentage = (double)valuesInRange / insertedNumber * 100.0;
        printf("%% entre 10 e 20: %.2lf%%\n", percentage);
    } else {
        printf("Nenhum número válido foi inserido.\n");
    }

return 0;
}