// Fazer um programa que simule um campeonato com 4 times (A, B, C e D). Sera pedido o nome do
// primeiro time com os gols marcados e o nome do segundo time com os gols marcados. Este processo

// se repetir ́a at ́e que seja informado um valor diferente de A, B, C ou D para o primeiro time. Ao final
// dever ́a ser apresentado o n ́umero de pontos de cada time e o campe ̃ao. Caso houve empate na primeira
// coloca ̧c ̃ao informar que n ̃ao houve campe ̃ao. Calculo dos pontos: vit ́oria 3 pontos, empate 1 ponto e
// derrota 0 ponto. Exemplo:
// Time: A
// Gols: 2
// Time: B
// Gols: 1
// Time: C
// Gols: 2
// Time: A
// Gols: 4
// Time: X ← valor diferente de A, B, C ou D ent ̃ao finaliza
// Campe ̃ao: A
// A: 6 pontos
// B: 0 pontos
// C: 0 pontos
// D: 0 pontos

#include <stdio.h>

int main() {
    char teams[4] = {'A', 'B', 'C', 'D'};
    int points[4] = {0, 0, 0, 0};

    while (1) {
        char team1;
        int gols1;
        char team2;
        int gols2;

        printf("Time: ");
        scanf(" %c", &team1);

        if (team1 != 'A' && team1 != 'B' && team1 != 'C' && team1 != 'D') {
            break;
        }

        printf("Gols: ");
        scanf("%d", &gols1);

        printf("Time: ");
        scanf(" %c", &team2);

        if (team2 != 'A' && team2 != 'B' && team2 != 'C' && team2 != 'D') {
            break;
        }

        printf("Gols: ");
        scanf("%d", &gols2);

        if (team1 == team2) {
            points[team1 - 'A']++;
            points[team2 - 'A']++;
        } else if (gols1 > gols2) {
            points[team1 - 'A'] += 3;
        } else {
            points[team2 - 'A'] += 3;
        }
    }

    int highiestScore = -1;
    char winner = 'A';

    for (int i = 0; i < 4; i++) {
        if (points[i] > highiestScore) {
            highiestScore = points[i];
            winner = teams[i];
        }
    }

    printf("Campeão: %c\n", winner);

    for (int i = 0; i < 4; i++) {
        printf("%c: %d pontos\n", teams[i], points[i]);
    }

    return 0;
}

