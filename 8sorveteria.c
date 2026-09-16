#include <stdio.h>
int main() {
    float valorConta, valorArrecadado = 0.0, valorAmigo; // Variáveis para armazenar o valor da conta, o valor arrecadado e o valor que cada amigo coloca na mesa

    // Solicita ao usuário o valor da conta
    printf("Digite o valor da conta: ");
    scanf("%f", &valorConta); // Lê o valor da conta como um número de ponto flutuante

    // Laço while para arrecadar dinheiro até que o valor arrecadado seja igual ou maior que o valor da conta
    while (valorArrecadado < valorConta) {
        // Solicita ao usuário o valor que cada amigo está colocando na mesa
        printf("Digite o valor que cada amigo esta colocando na mesa: ");
        scanf("%f", &valorAmigo); // Lê o valor do amigo como um número de ponto flutuante

        // Adiciona o valor do amigo ao total arrecadado
        valorArrecadado += valorAmigo; // Atualiza o valor arrecadado
    }

    // Calcula e exibe o troco, se houver
    if (valorArrecadado > valorConta) {
        printf("Opa chefe vai embora sem seu troco, ta aqui ele: R$ %.2f\n", valorArrecadado - valorConta); // Exibe o troco formatado com duas casas decimais
    } else {
        printf("Nao ha troco, muito obrigado voltem sempre\n"); // Informa que não há troco se o valor arrecadado for igual ao da conta
    }

    return 0;  
}