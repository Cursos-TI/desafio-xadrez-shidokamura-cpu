#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int pecas, bispo, torre, rainha, cavaloMove1, cavaloMove2; // peças  
    int casas, direcao;

    bispo = 0;
    torre = 0;
    rainha = 0;
    cavaloMove1 = 0;
    cavaloMove2 = 0;

    printf("***Conhecendo peças de Xadrez***\n");
    printf("Peças\n1. Bispo\n2. Torre\n3. Rainha\n4. Cavalo\n");
    scanf("%d", &pecas);
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // por enquanto vou fazer um movimento e deixar o resto meio pronto em comentarios 
    while (bispo <= 5){
        //switch (direcao) // escolher a direção, talvez ?
        //{
        //case 'W':
        //case 'w':
            printf("bispo anda para diagonal superior direita\n");
            bispo++;
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
        torre++;
    } while (torre <= 5);
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for (rainha = 0; rainha <= 8 ; rainha ++) {
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
    while (cavaloMove1 < 2) {
        for (cavaloMove2 = 0; cavaloMove2 < 3; cavaloMove1++, cavaloMove2++) {
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
