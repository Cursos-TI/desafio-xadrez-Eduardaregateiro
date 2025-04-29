## Desafio de Xadrez - MateCheck 

Objetivo: Programa criado em C para simular o movimento básico de peças de xadrez no tabuleiro, ajudando a aprimorar habilidades na programação.

Descrição Geral:
- Um menu permite ao jogador escolher entre Bispo, Torre, Rainha e Cavalo.
- Cada peça realiza uma movimentação específica, com base nas regras do xadrez.
- Mensagens de erro são exibidas caso uma escolha inválida seja feita.


Movimentos das Peças:
- Bispo: Movimento diagonal para cima e direita (5 casas).
- Torre: Movimento horizontal para a direita (5 casas).
- Rainha: Movimento horizontal para a esquerda (até 8 casas).
- Cavalo: Movimento em "L" (2 para cima, 1 para a direita).

Detalhes Técnicos das Funções:
#moverBispo(int casas):
- Movimento diagonal, imprimindo "Cima, direita".
- Usa while para repetir o movimento por 5 casas.

#moverTorre():
- Movimento horizontal, imprimindo "Direita" 5 vezes.
- Usa for para gerenciar o número de repetições.

#moverRainha(int casas):
- Movimento horizontal para a esquerda.
- Usa do while para continuar até atingir 8 casas.

#moverCavaloAvancado():
- Realiza movimento em "L", imprimindo "Cima" 2 vezes e "Direita" 1 vez.
- Controlado por for e if.

#main():
- Exibe o menu para o jogador escolher a peça.
- Usa if-else if para chamar a função correspondente.
- Imprime mensagens para guiar o jogador ou alertar sobre escolhas inválidas.

**Criado com o objetivo de aprimorar habilidades na programação em C.**


