#include <stdio.h>

int main() {

    float nota1, nota2, media, notaFinal; // Variáveis para armazenar as notas e a média

    // Solicita ao usuário a primeira nota
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1); // Lê a primeira nota como um número de ponto flutuante

    // Solicita ao usuário a segunda nota
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); // Lê a segunda nota como um número de ponto flutuante

    // Calcula a média das duas notas
    media = (nota1 + nota2) / 2; // Soma as notas e divide por 2 para obter a média

    // Verifica se o aluno foi aprovado, reprovado ou precisa da Prova Final
    if (media >= 7.0) { // Se a média for maior ou igual a 7.0
        printf("boa professor o senhor esta aprovado: %.2f\n", media); // Exibe mensagem de aprovação com a média formatada
    } else if (media < 4.0) { // Se a média for menor que 4.0
        printf("reprovado professor o senhor nao atingiu sua nota: %.2f\n", media); // Exibe mensagem de reprovação com a média formatada
    } else { // Se a média estiver entre 4.0 e 6.9
        notaFinal = (5.0 * 2) - (nota1 + nota2); // Calcula a nota necessária na Prova Final para atingir média mínima de 5.0
        printf("Precisa tirar %.2f na Prova Final para ser aprovado, ja sabe q repetiu ne professor kkkkkkkk\n", notaFinal); // Exibe mensagem informando a nota necessária na Prova Final
    }

    return 0;
}