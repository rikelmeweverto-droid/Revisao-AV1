/*Desafio: O Algoritmo de Empacotamento Inteligente
Cenário: Um cliente comprou um lote grande de ferramentas. O almoxarifado possui caixas de 3 tamanhos: Caixa Grande (cabe 10 unidades), Caixa Média (cabem 5 unidades) e Caixa Pequena (cabe 1 unidade).
Missão: O usuário digita a quantidade total de ferramentas vendidas. O sistema deve calcular a menor quantidade possível de caixas necessárias para enviar o pedido, priorizando sempre as caixas maiores.*/

#include <stdio.h>
int main() {
    int quantidade, caixasGrandes, caixasMedias, caixasPequenas;

    // Solicita ao usuário a quantidade total de ferramentas vendidas
    printf("Digite a quantidade total de ferramentas vendidas: ");
    scanf("%d", &quantidade);

    // Calcula a quantidade de caixas grandes necessárias
    caixasGrandes = quantidade / 10;
    quantidade %= 10; // Atualiza a quantidade restante

    // Calcula a quantidade de caixas médias necessárias
    caixasMedias = quantidade / 5;
    quantidade %= 5; // Atualiza a quantidade restante

    // A quantidade restante será o número de caixas pequenas necessárias
    caixasPequenas = quantidade;

    // Exibe o resultado
    printf("Caixas Grandes: %d\n", caixasGrandes);
    printf("Caixas Medias: %d\n", caixasMedias);
    printf("Caixas Pequenas: %d\n", caixasPequenas);

    return 0;
}