#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    char B, T, R, C; // peças 
    int direcao; // ainda não sei se vou usar

    B = 0;
    T = 0;
    R = 0;
    C = 0;

    printf("***Conhecendo peças de Xadrez***\n");
    printf("Peças\nBispo\nTorre\nRainha\n");
    //printf("Escolha uma direção\nW. cima\nS. baixo\nA. esquerda\nD. direita");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // por enquanto vou fazer um movimento e deixar o resto meio pronto em comentarios 
    while (B <= 5){
        //switch (direcao) // escolher a direção, talvez ?
        //{
        //case 'W':
        //case 'w':
            printf("bispo anda para diagonal superior direita\n");
            B++;
            //break;
        //case 'S':
        //case 's'; 
        //default:
            //printf("Não existe essa direção\n");
            //break;
        //}
        
    }
    /*while (B <= 5){
        printf("bispo anda para diagonal inferior direita\n");
    }
    while (B <= 5){
        printf("bispo anda para diagonal superior esquerda\n");
    }
    while (B <= 5){
        printf("bispo anda para diagonal inferior esquerda\n");
    }
    */
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    do {
        //printf("torre anda para cima\n");
        //printf("torre anda para baixo\n");
        printf("torre anda para direita\n");
        //printf("torre anda para esquerda\n");
        T++;
    } while (T <= 5);
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for (R = 0; R <= 8 ; R ++) {
        //printf("Rainha anda para cima\n");
        //printf("Rainha anda para baixo\n");
        printf("Rainha anda para esquerda\n");
        //printf("Rainha anda para direita\n");
        //printf("Rainha anda para diagonal superior esquerda\n");
        //printf("Rainha anda para diagonal inferior esquerda\n");
        //printf("Rainha anda para diagonal superior direita \n");
        //printf("Rainha anda para diagonal inferior direita \n");
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    for (C = 0; C < 2; C--) {
        for (C = 0; C < 3; C++) {
            printf("Cavalo anda para cima\n");
        }
        printf("Cavalo anda para direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("Fim do jogo...");
    return 0;
}
