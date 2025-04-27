#include <stdio.h>

// Protótipos das funções
float media(float vetor[2]);
float dobro(float vetor[2]);
void maior(float vetor[2]);

int main() {
    float numeros[2];
    
    // Recebe os dois números reais
    printf("Digite o primeiro número real: ");
    scanf("%f", &numeros[0]);
    printf("Digite o segundo número real: ");
    scanf("%f", &numeros[1]);
    
    // Mostra o vetor antes de usar media()
    printf("\nVetor antes de calcular a média: [%.2f, %.2f]\n", numeros[0], numeros[1]);
    
    // Calcula e mostra a média
    float m = media(numeros);
    printf("Média dos valores: %.2f\n", m);
    
    // Mostra o vetor após usar dobro()
    float nova_media = dobro(numeros);
    printf("\nVetor após dobrar os valores: [%.2f, %.2f]\n", numeros[0], numeros[1]);
    printf("Nova média após dobrar: %.2f\n", nova_media);
    
    // Mostra o vetor antes de chamar maior()
    printf("\nVetor antes de ordenar com maior(): [%.2f, %.2f]\n", numeros[0], numeros[1]);
    
    // Chama a função maior() e mostra o vetor depois
    maior(numeros);
    printf("Vetor após ordenar com maior(): [%.2f, %.2f]\n", numeros[0], numeros[1]);
    
    return 0;
}

// Função que calcula a média dos valores no vetor
float media(float vetor[2]) {
    return (vetor[0] + vetor[1]) / 2.0;
}

// Função que dobra os valores no vetor e retorna a nova média
float dobro(float vetor[2]) {
    vetor[0] *= 2.0;
    vetor[1] *= 2.0;
    return media(vetor);
}

// Função que coloca o maior valor em primeiro lugar
void maior(float vetor[2]) {
    if (vetor[1] > vetor[0]) {
        // Troca os valores se o segundo for maior que o primeiro
        float temp = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = temp;
    }
}