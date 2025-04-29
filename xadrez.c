#include <stdio.h>

// Desafio de Xadrez - MateCheck
void moverBispo(int casas)
{
    while (casas >= 1)
    {
        printf("Cima, direita\n\n"); // imprimi a direção do movimento
        casas--;
    }
}
void moverTorre()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("Direita\n\n"); // imprimi a direção do movimento}
    }
}
void moverRainha(int casas)
{
    do
    {
        printf("Esquerda\n\n"); // imprimi a direção do movimento
        casas++;
    } while (casas <= 8);
}
void moverCavaloAvancado()
{
    for (int i = 1; i <= 2; i++)
    {
        printf("Cima\n\n"); // Mover duas vezes para cima
        if (i == 2)
        {
            printf("Direita\n"); // Mover uma vez para direita
        }
    }
}

int main()
{

    int escolhapeca; // para o menu
    

    printf(" * Jogo Xadrez * \n\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("Escolha qual peça deseja movimentar: ");
    scanf("%d", &escolhapeca); //menu

    // Nível Novato - Movimentação das Peças
    if (escolhapeca == 1)
    { // Implementação de Movimentação do Bispo, mova o bispo 5 casas diagonal para direita

        moverBispo(5);
    }
    else if (escolhapeca == 2)
    { // Implementação de Movimentação da Torre, mova a torre 5 casas para direita
        moverTorre();
    }
    else if (escolhapeca == 3)
    { // Implementação de Movimentação da Rainha, mova a rainha 8 casas para esquerda
        moverRainha(1);
    }
    else if (escolhapeca == 4)
    { // Implementação de Movimentação do cavalho, mova o cavalo para cima duas vezes e uma vez para direita

        moverCavaloAvancado();
    }

    else
    {
        printf("Escolha inválida.\n");
    }

   
    return 0;
}
