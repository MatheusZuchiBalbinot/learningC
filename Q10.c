// Um professor gostaria de ter um programa para calcular a m ́edia final de seus alunos. Para isso ele
// informa a matr ́ıcula e as 10 notas que o alunos teve durante o semestre. Ap ́os informar as 10 notas, o
// programa imprime a mar ́ıcula do aluno e a m ́edia que obteve (m ́edia aritm ́etica simples). Quando o
// professor digitar 0 o programa finaliza e apresenta a m ́edia geral da turma. Proibido colocar 10 input
// para pedir as notas. Exemplo:
// Matr ́ıcula: 22010
// Nota 1: 4
// Nota 2: 6
// Nota 3: 6
// Nota 4: 6
// Nota 5: 8
// Nota 6: 4
// Nota 7: 7
// Nota 8: 8
// Nota 9: 6
// Nota 10: 5
// 22010, m ́edia: 6.0
// Matr ́ıcula: 0
// M ́edia geral da turma: 6.0


#include <stdio.h>

int main() {
    int registration, gradeCounter = 0, studentCounter = 0;
    double grade, gradesSum = 0.0, avarageClassGrade = 0.0;

    while (1) {
        printf("Matrícula: ");
        scanf("%d", &registration);
        
        if (registration == 0) {
            break;
        }

        gradesSum = 0.0;
        gradeCounter = 0;

        for (int i = 1; i <= 10; i++) {
            printf("Nota %d: ", i);
            scanf("%lf", &grade);
            gradesSum += grade;
            gradeCounter++;
        }

        double studentAvarageGrade = gradesSum / gradeCounter;

        printf("%d, média: %.1lf\n", registration, studentAvarageGrade);

        avarageClassGrade = (avarageClassGrade * studentCounter + studentAvarageGrade) / (studentCounter + 1);
        studentCounter++;
    }

    printf("Média geral da turma: %.1lf\n", avarageClassGrade);

    return 0;
}
