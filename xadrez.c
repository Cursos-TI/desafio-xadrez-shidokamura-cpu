#include <stdio.h>

// Nível Mestre - Funções Recursivas e Loops Aninhados
void movimentoRecursivoBispo(int bispo) {  //função recursiva
    if (bispo > 0 && bispo <= 6) {  // Movimento recursivo do Bispo.
        printf("O Bispo tem %d movimentos.\n", bispo);
        movimentoRecursivoBispo(bispo - 1); // o Bispo anda.     
    }    
}
void movimentoRecursivoTorre(int torre) {  //função recursiva
    if (torre > 0 && torre <= 6) {  // Movimento recursivo do Bispo.
        printf("A Torre tem %d movimentos.\n", torre);
        movimentoRecursivoTorre(torre - 1); // o Bispo anda.     
    }    
}
void movimentoRecursivoRainha(int rainha) {  //função recursiva
    if (rainha > 0 && rainha <= 6) {  // Movimento recursivo do Bispo.
        printf("A Rainha tem %d movimentos.\n", rainha);
        movimentoRecursivoRainha(rainha - 1); // o Bispo anda.     
    }    
}


// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int pecas, bispo, torre, rainha, cavaloMove1, cavaloMove2; // peças  
    int direcao;

    bispo = 0;
    torre = 0;
    rainha = 0;
    cavaloMove1 = 0;
    cavaloMove2 = 0;

    do {  // Inicializa o App
        printf("***Conhecendo peças de Xadrez***\n");
        //printf("Escolha uma direção:\n7.🡔 | 8.🡑 | 9.🡕\n4.🡐  Peça   6.🡒\n1.🡗 | 2.🡓 | 3.🡖\n");
        printf("Peças\n1. Bispo\n2. Torre\n3. Rainha\n4. Cavalo\n0.Sair\n");
        scanf("%d", &pecas);
            switch (pecas) {
            case 1: // Implementação de Movimentação do Bispo
            printf("Você escolheu o Bispo\n");
            printf("Quantas casas o Bispo deve se mover? \n");
            scanf("%d", &bispo);
            while (bispo > 0 && bispo <6) {
                movimentoRecursivoBispo(bispo);
            } 
            if (bispo == 0) {
                printf("O Bispo terminou a jogada\n");
            } else if (bispo > 6) {
                printf("O Bispo não pode andar mais que 5 casas\n");
                printf("Quantas casas o Bispo deve se mover? \n");
            }    
                break;
            case 2: // Implementação de Movimentação da Torre
            printf("Você escolheu a Torre\n");
            printf("Quantas casas a Torre deve se mover?\n");
            scanf("%d", &torre);
            do {
                //menu_direcoes;
                movimentoRecursivoTorre(torre); // lembra de colocar pra direita 
            } while (torre > 0 && torre < 5);
            if (torre == 0) {
                printf("A Torre terminou a jogada\n");
            } else if (torre > 5) {
                printf("A Torre não pode andar mais que 5 casas\n");
                printf("Quantas casas a Torre deve se mover? \n");
            }
            break;
            case 3: // Implementação de Movimentação da Rainha
                printf("Você escolheu a Rainha\n");
                printf("Quantas casas a rainha deve se mover? \n");
                scanf("%d", &rainha);
                for (rainha = 0; rainha <= 8 ; rainha ++) {
                    //menu_direcoes(1);
                    movimentoRecursivoRainha(rainha); // lembra de colocar pra esquerda                     
                    if (rainha == 0) {
                        printf("A Rainha terminou a jogada\n");
                    } else if (rainha > 5) {
                        printf("A Rainha não pode andar mais que 5 casas\n");
                        printf("Quantas casas a Rainha deve se mover? \n");
                    break;
                    }
                }
                break;
            case 4: // Implementação de Movimentação do Cavalo
                printf("Você escolheu o Cavalo\n");
                printf("O Cavalo fará apenas um movimento para cima e até 3 casas para a direita\n"); //ainda pensando em uma forma de fazer isso melhor.
                printf("Quantas vezes o cavalo deve para direita? \n");
                scanf("%d", &cavaloMove2);
                while (cavaloMove1 <= 2 ) {
                    for (cavaloMove2 = 0; cavaloMove2 < 3; cavaloMove1++) {
                        printf("Cavalo anda para direita\n");
                    }
                    printf("Cavalo anda para cima\n");                
                }
                break;
            default:
                printf("Não tem dama! XD\n");
                break;
            }    
            

            // Implementação de Movimentação do Bispo
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
            
            
            // Implementação de Movimentação da Torre
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
            printf("Quantas casas a Torre deve se mover? \n");
            scanf("%d", &torre);
            do {
                movimentoRecursivoTorre(torre); // lembra de colocar pra direita 
            
            } while (torre > 0 && torre < 5);
            
            // Implementação de Movimentação da Rainha
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
            for (rainha = 0; rainha <= 8 ; rainha ++) {
            movimentoRecursivoRainha(rainha); // lembra de colocar pra esquerda  
                
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
        // Sugestão: Substitua as movimentações das peças por funções recursivas.

        // Inclua o uso de continue e break dentro dos loops.     
        } while (pecas != 0); // Finaliza o App.
    printf("Fim do jogo...\n"); 
    return 0;
}
