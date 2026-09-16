#include <stdio.h>

int main() {

    float peso, maiorPeso, menorPeso; // Variáveis para armazenar o peso atual, o maior peso e o menor peso

    // Solicita ao usuário o peso da primeira caixa
    printf("Digite o peso da caixa 1: ");
    scanf("%f", &peso); // Lê o peso da primeira caixa como um número de ponto flutuante

    // Inicializa o maior e menor peso com o peso da primeira caixa
    maiorPeso = peso; // Define o maior peso como o peso da primeira caixa
    menorPeso = peso; // Define o menor peso como o peso da primeira caixa

    // Laço for para ler os pesos das caixas restantes (2 a 5)
    for (int i = 2; i <= 5; i++) {
        // Solicita ao usuário o peso da próxima caixa
        printf("Digite o peso da caixa %d: ", i);
        scanf("%f", &peso); // Lê o peso da próxima caixa como um número de ponto flutuante

        // Verifica se o peso atual é maior que o maior peso registrado
        if (peso > maiorPeso) {
            maiorPeso = peso; // Atualiza o maior peso se necessário
        }

        // Verifica se o peso atual é menor que o menor peso registrado
        if (peso < menorPeso) {
            menorPeso = peso; // Atualiza o menor peso se necessário
        }
    }

    // Exibe os resultados finais do maior e menor peso
    printf("Maior Peso: %.2f\n", maiorPeso); // Exibe o maior peso formatado com duas casas decimais
    printf("Menor Peso: %.2f\n", menorPeso); // Exibe o menor peso formatado com duas casas decimais

    return 0;
}