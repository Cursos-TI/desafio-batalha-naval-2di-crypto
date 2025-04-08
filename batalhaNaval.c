#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

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

    
    int main (){

        int tabuleiro1[10][10] = {0}; //DECLARANDO O TAMANHO DA MATRIZ QUE REPRESENTA O TABULEIRO (DO CONE)
        int tabuleiro2[10][10] = {0}; //DECLARANDO O TAMANHO DA MATRIZ QUE REPRESENTA O TABULEIRO (DO OCTAEDRO)
        int tabuleiro3[10][10] = {0}; //DECLARANDO O TAMANHO DA MATRIZ QUE REPRESENTA O TABULEIRO (DA CRUZ)
        
        int x = 5, y = 5; //DEFININDO UM PONTO DE PARTIDA NA MATRIZ, PARA POSICIONAR AS FORMAS
        //PONTO DE PARTIDA, LINHA 5 E COLUNA 5.
    
    
        
    //CONE
    
    //DEFININDO AS POSIÇÕES DOS NÚMEROS 1 NA MATRIZ, PARA A FORMAÇÃO DO CONE.
    
    for (int j = y; j <= y; j++) {
        tabuleiro1[x - 2][j] = 1;
    }
    for (int j = y - 1; j <= y + 1; j++) {
        tabuleiro1[x - 1][j] = 1;
    }
    for (int j = y - 2; j <= y + 2; j++) {
        tabuleiro1[x][j] = 1;
    }
    
    // IMPRIMINDO A IMAGEM DO TABULEIRO COM O CONE
    printf("Habilidade Cone:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d  ", tabuleiro1[i][j]);
        }
        printf("\n");
    }
    
    //DEFININDO AS POSIÇÕES DOS NÚMEROS 1 NA MATRIZ, PARA A FORMAÇÃO DO OCTAEDRO.
    for (int j = 2; j <= 2; j++) {
        tabuleiro2[0][j] = 1;
    }
    for (int j = 1; j <= 3; j++) {
        tabuleiro2[1][j] = 1;
    }
    for (int j = 2; j <= 2; j++) {
        tabuleiro2[2][j] = 1;
    }
    
    // IMPRIMINDO A IMAGEM DO TABULEIRO COM O OCTAEDRO
    printf("\nHabilidade Octaedro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d  ", tabuleiro2[i][j]);
        }
        printf("\n");
    }
    
    // DEFININDO AS POSIÇÕES DOS NÚMEROS 1 NA MATRIZ, PARA A FORMAÇÃO DA CRUZ.
    
    for (int j = y; j <= y; j++) { 
        tabuleiro3[x][j] = 1;
    }
    for (int j = y - 2; j <= y + 2; j++) { // 
        tabuleiro3[x][j] = 1;
    }
    for (int i = x - 1; i <= x + 1; i++) { 
        tabuleiro3[i][y] = 1;
    }
    
    // IMPRIMINDO A IMAGEM DO TABULEIRO COM A CRUZ
    printf("\nHabilidade Cruz:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d  ", tabuleiro3[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
    }