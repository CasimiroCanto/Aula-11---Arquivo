#include <stdio.h>

int main() {
    float notas[4], total = 0.0;
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        total += notas[i];
        notas[i] = notas[i]/4;

    }

    printf("Total das notas: %.2f\n", total);
    printf("Média das notas: %.2f\n", total / 4);
  
    return 0;
}