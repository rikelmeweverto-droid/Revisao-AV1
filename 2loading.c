#include <stdio.h>
#include <windows.h> // Biblioteca para a função sleep()

int main() {
    int i;
    for (i = 0; i <= 100; i++) {
        // Exibe o indicador de carregamento com os caracteres giratórios
        printf("\rCarregando: [%d%%] ", i); // Exibe a porcentagem de carregamento
        switch (i % 4) { // Alterna entre os caracteres giratórios
            case 0:
                printf("[|]"); // Exibe o caractere |
                break;
            case 1:
                printf("[/]"); // Exibe o caractere /
                break;
            case 2:
                printf("[-]"); // Exibe o caractere -
                break;
            case 3:
                printf("[\\\\]"); // Exibe o caractere \
                break;
        }
        fflush(stdout); // Garante que a saída seja exibida imediatamente
        Sleep(100); // Pausa por 100 milissegundos para criar a animação
    }
    printf("\nCarregamento concluido!\n"); // Mensagem final após o carregamento
    return 0;
}