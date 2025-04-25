#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int i, escolhapeca;

    printf(" * Jogo Xadrez * \n\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("Escolha qual peça deseja movimentar: ");
    scanf("%d", &escolhapeca);

    // Nível Novato - Movimentação das Peças
    if (escolhapeca == 1){  // Implementação de Movimentação do Bispo, mova o bispo 5 casas diagonal para direita

       i = 1;

        while (i <= 5)
        {
            printf("Cima, direita\n"); // imprimi a direção do movimento
            i++;
        }
    }
    else if (escolhapeca == 2) { // Implementação de Movimentação da Torre, mova a torre 5 casas para direita
        for (i = 1; i <= 5; i++)
        {
            printf("Direita\n"); // imprimi a direção do movimento}
        }
    }
    else if (escolhapeca == 3) { // Implementação de Movimentação da Rainha, mova a rainha 8 casas para esquerda
        int i = 1;
        do
        {
            printf("Esquerda\n"); // imprimi a direção do movimento
            i++;
        } while (i <= 8);
    }
    else
    {
        printf("Escolha inválida.\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
