#include <stdio.h>

float media(float vetor[]) {
    return (vetor[0] + vetor[1]) / 2.0;
}

float dobro(float vetor[]) {
    vetor[0] *= 2.0;
    vetor[1] *= 2.0;
    return media(vetor);
}

void maior(float vetor[]) {
    if (vetor[1] > vetor[0]) {
        float temp = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = temp;
    }
}

int main() {
    float numeros[2];
    
    printf("Digite o primeiro número real: ");
    scanf("%f", &numeros[0]);
    printf("Digite o segundo número real: ");
    scanf("%f", &numeros[1]);
    
    printf("\nVetor antes de calcular a média: [%.2f, %.2f]\n", numeros[0], numeros[1]);
    printf("Média: %.2f\n", media(numeros));
    
    printf("\nVetor após dobrar os valores: [%.2f, %.2f]\n", numeros[0], numeros[1]);
    printf("Nova média após dobrar: %.2f\n", dobro(numeros));
    
    printf("\nVetor antes de chamar maior(): [%.2f, %.2f]\n", numeros[0], numeros[1]);
    maior(numeros);
    printf("Vetor após chamar maior(): [%.2f, %.2f]\n", numeros[0], numeros[1]);
    
    return 0;
}