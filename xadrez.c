#include <stdio.h>

// Nível Mestre - Funções Recursivas e Loops Aninhados 
void movimentoRecursivoBispo(int bispo) {  //função recursiva
    if (bispo >= 1 && bispo < 6) {  // Movimento recursivo do Bispo.
        bispo --;
        printf("O Bispo se move para a diagonal superior direita\n", bispo); 
        movimentoRecursivoBispo(bispo);  // o Bispo anda.    
    }    
}

void movimentoRecursivoTorre(int torre) {  //função recursiva
    if (torre >= 1 && torre < 6) {  // Movimento recursivo da Torre.
        torre --;
        printf("A Torre se move para a direita\n", torre);  
        movimentoRecursivoTorre(torre); // a Torre anda.    
    }    
}

void movimentoRecursivoRainha(int rainha) {  //função recursiva
    if (rainha >= 1 && rainha < 9) {  // Movimento recursivo da Rainha.
        rainha --;
        printf("A Rainha se move para a esquerda\n", rainha); 
        movimentoRecursivoRainha(rainha); // a Rainha anda.  
          
    }    
}

int main() { 
    // Nível Novato - Movimentação das Peças
    int pecas, bispo, torre, rainha, cavaloMove1, cavaloMove2; // peças 

    do { //Menu basico né, sempre retorna aqui depois de um bloco de codigo switch ser executado.
        printf("***Conhecendo peças de Xadrez***\n");
        printf("Peças\n1. Bispo\n2. Torre\n3. Rainha\n4. Cavalo\n0.Sair\n"); // apresento as peças pra escolher e seus numeros no menu.
        scanf("%d", &pecas); // usuario escolhe a peça
            switch (pecas) { 
            case 1: // Implementação de Movimentação do Bispo                
                printf("Você escolheu o Bispo\n");
                printf("Quantas casas o bispo deve se mover? \n");
                scanf("%d", &bispo);                 
                    while (bispo > 5) {
                        printf("O Bispo não pode andar mais que 5 casas\n");
                        break;
                        }
                movimentoRecursivoBispo(bispo); 
                    printf("O Bispo terminou a jogada\n");
                    printf("\n");
            break;
                
            case 2: // Implementação de Movimentação da Torre
                printf("Você escolheu a Torre\n");
                printf("Quantas casas a Torre deve se mover?\n");
                scanf("%d", &torre);  
                while (torre > 5) { // era um do-while aqui mas por algum motivo tava dando loop infinito então eu tirei tudo e simplifiquei
                    printf("A Torre não pode andar mais que 5 casas\n");
                    break;
                 }
                movimentoRecursivoTorre(torre);
                    printf("A Torre terminou a jogada\n");
                    printf("\n");
                break;
            case 3: // Implementação de Movimentação da Rainha
                printf("Você escolheu a Rainha\n");
                printf("Quantas casas a rainha deve se mover?\n");
                scanf("%d", &rainha);
                for (rainha ; rainha > 8;) { //feio demais assim mas funcionou XD foram muitas tentativas 
                    printf("A Rainha não pode andar mais que 8 casas\n");
                break;
                }
                movimentoRecursivoRainha(rainha);                              
                    printf("A Rainha terminou a jogada\n");
                    printf("\n");         
                    break;
            case 4: // Implementação de Movimentação do Cavalo
                printf("Você escolheu o Cavalo\n");
                printf("O Cavalo fará apenas um movimento para cima e até 3 casas para a direita\n"); 
                //ainda pensando em uma forma de fazer isso melhor. att: não achei forma melhor quanto mais eu mexia mais quebrava tudo.
                for (cavaloMove1 = 0; cavaloMove1 < 1; cavaloMove1 ++) {
                    for (cavaloMove2 = 0; cavaloMove2 <= 2; cavaloMove2 ++) {
                        printf("Cavalo anda para direita\n");
                    }
                    printf("Cavalo anda para cima\n");                
                }
                printf("O Cavalo terminou a jogada\n"); 
                printf("\n");
                break;
            case 0: // para finalizar o app
                pecas = 0;
                break;
            default: // caso o usuario escolha um numero que não tenha peça.
                printf("Não tem dama! XD\n");
                printf("\n");
                break;
        }
    } while (pecas != 0); // Finaliza o App.
    printf("Fim do jogo...\n"); 
    return 0;
}
