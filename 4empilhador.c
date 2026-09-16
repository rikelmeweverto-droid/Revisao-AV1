#include <stdio.h>

int main () {
    int altura;

    // Solicita ao usuário a altura da pilha
    printf("Digite a altura da pilha: ");
    scanf("%d", &altura); // Lê a altura como um número inteiro

    // Laço externo para controlar o número de linhas (de 1 até a altura)
    for (int i = 1; i <= altura; i++) {
        // Laço interno para desenhar as caixas na linha atual
        for (int j = 1; j <= i; j++) {
            printf("[]"); // Imprime uma caixa []
        }
        printf("\n"); // Move para a próxima linha após imprimir todas as caixas da linha atual
    }

    return 0;
}