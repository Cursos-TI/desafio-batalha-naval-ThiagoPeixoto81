#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tabuleiro[10][10] = {{0}};
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};
    int navio3[3] = {3, 3, 3};
    int navio4[3] = {3, 3, 3};

    //Posicionando o navio 1 na linha 3 e coluna 5
    int linha = 2;
    for (int horizontal = 0; horizontal < 3; horizontal++){
        tabuleiro[linha][4+horizontal] = navio1[horizontal];
    }

    //Posicionando o navio 2 na linha 8 e coluna 8
    int coluna = 7;
    for (int vertical = 0; vertical < 3; vertical++){
        tabuleiro[vertical+7][coluna] = navio1[vertical];
    }

    //Posicionando o navio 3 na linha 10 e coluna 1
    int linhaDiagonal = 9;
    int colunaDiagonal = 0;
    for (int diagonal1 = 0; diagonal1 < 3; diagonal1++){
        tabuleiro[linhaDiagonal-diagonal1][colunaDiagonal+diagonal1] = navio1[diagonal1];
    }

    //Posicionando o navio 4 na linha 5 e coluna 7
    int linhaDiagonal2 = 4;
    int colunaDiagonal2 = 6;
    for (int diagonal2 = 0; diagonal2 < 3; diagonal2++){
        tabuleiro[linhaDiagonal2+diagonal2][colunaDiagonal2-diagonal2] = navio1[diagonal2];
    }

    //Exibindo matriz
    for (int vertical = 0; vertical < 10; vertical++){
        for (int horizontal = 0; horizontal < 10; horizontal++){
            if (horizontal == 9){
                printf("%d\n", tabuleiro[vertical][horizontal]);
            } else {
                printf("%d ", tabuleiro[vertical][horizontal]);
            }
            
        }
    }



    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
