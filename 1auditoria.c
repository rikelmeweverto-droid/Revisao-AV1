#include <stdio.h>

int main() {

    char nomeFerramenta[50]; // Variável para armazenar o nome da ferramenta
    int quantidade;           // Variável para armazenar a quantidade em estoque
    float valorUnitario;     // Variável para armazenar o valor unitário da ferramenta
    float valorTotal;        // Variável para armazenar o valor total do lote

    // Solicita ao usuário o nome da ferramenta
    printf("Digite o nome da ferramenta: ");
    fgets(nomeFerramenta, sizeof(nomeFerramenta), stdin); // Lê o nome da ferramenta com espaços

    // Solicita ao usuário a quantidade em estoque
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &quantidade); // Lê a quantidade como um número inteiro

    // Solicita ao usuário o valor unitário da ferramenta
    printf("Digite o valor unitario da ferramenta: ");
    scanf("%f", &valorUnitario); // Lê o valor unitário como um número de ponto flutuante

    // Calcula o valor total do lote
    valorTotal = quantidade * valorUnitario; // Multiplica a quantidade pelo valor unitário

    // Exibe o mini-relatório na tela
    printf("\n--- Mini-Relatorio ---\n");
    printf("Nome da Ferramenta: %s", nomeFerramenta); // Exibe o nome da ferramenta
    printf("Quantidade em Estoque: %d\n", quantidade); // Exibe a quantidade em estoque
    printf("Valor Unitario: R$ %.2f\n", valorUnitario); // Exibe o valor unitário formatado com duas casas decimais
    printf("Valor Total do Lote: R$ %.2f\n", valorTotal); // Exibe o valor total do lote formatado com duas casas decimais

    return 0;
}