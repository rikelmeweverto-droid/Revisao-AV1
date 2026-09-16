#include <stdio.h>

int main() {

    float valorCarro, economiaMensal, totalEconomizado = 0.0; // Variáveis para armazenar o valor do carro, a economia mensal e o total economizado
    int mes = 0; // Variável para contar os meses

    // Solicita ao usuário o valor do carro na Tabela FIPE
    printf("Digite o valor do carro na Tabela FIPE: ");
    scanf("%f", &valorCarro); // Lê o valor do carro como um número de ponto flutuante

    // Solicita ao usuário quanto ele guarda por mês
    printf("Digite quanto voce guarda por mes: ");
    scanf("%f", &economiaMensal); // Lê a economia mensal como um número de ponto flutuante

    // Laço for para simular mês a mês a economia
    for (mes = 1; ; mes++) { // Laço infinito que incrementa o mês a cada iteração
        totalEconomizado += economiaMensal; // Adiciona a economia mensal ao total economizado

        // Verifica se o total economizado atingiu ou ultrapassou 30% do valor do carro
        if (totalEconomizado >= 0.3 * valorCarro) {
            break; // Sai do laço se atingir os 30%
        }
    }

    // Exibe o resultado final informando em quantos meses o cliente terá dinheiro suficiente para dar o lance
    printf("Voce tera dinheiro suficiente para dar o lance em %d meses.\n", mes); // Exibe a quantidade de meses necessários

    return 0;  
}