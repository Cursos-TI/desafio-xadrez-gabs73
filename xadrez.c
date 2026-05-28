#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int mov_bishop, mov_rook, mov_queen;    //quantidade de casas que cada peça moverá
    int dir_bishop, dir_rook, dir_queen;    //direção que cada peça moverá


//Movimentação Bispo
printf("Informe quantas casas o bispo andará\n");
    scanf("%d",&mov_bishop);

printf("Informe a direção que o bispo andará:\n");
    printf("1:Diagonal direita superior\n");
    printf("2:Diagonal direita inferior\n");
    printf("3:Diagonal esquerda superior\n");
    printf("4:Diagonal esquerda inferior\n");
        scanf("%d",&dir_bishop);

//Movimentação Torre
printf("Informe quantas casas a torre andará\n");
    scanf("%d",&mov_rook);

printf("Informe a direção que a torre andará:\n");
    printf("1:Direita\n");
    printf("2:Esquerda\n");
    printf("3:Cima\n");
    printf("4:Baixo\n");
        scanf("%d",&dir_rook);
            
//Movimentação Rainha
printf("Informe quantas casas a rainha andará\n");
    scanf("%d",&mov_queen);

printf("Informe a direção que a torre andará:\n");
    printf("1:Diagonal direita superior\n");
    printf("2:Diagonal direita inferior\n");
    printf("3:Diagonal esquerda superior\n");
    printf("4:Diagonal esquerda inferior\n");
    printf("5:Direita\n");
    printf("6:Esquerda\n");
    printf("7:Cima\n");
    printf("8:Baixo\n");
        scanf("%d",&dir_queen);

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for(int i=1;i<=mov_bishop;i++){
        if(dir_bishop==1){
            printf("Bispo andou uma casa para frente e uma casa para direita.\n");
        }else if(dir_bishop==2){
            printf("Bispo andou uma casa para trás e uma casa para direita.\n");
        }else if (dir_bishop==3){
            printf("Bispo andou uma casa para frente e uma casa para esquerda.\n");
        }else if (dir_bishop==4){
            printf("Bispo andou uma casa para trás e uma casa para esquerda.\n");
        }else{
            printf("Erro");
        }
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for(int i=1;i<=mov_rook;i++){
        if(dir_rook==1){
            printf("Torre andou uma casa para direita.\n");
        }else if(dir_rook==2){
            printf("Torre andou uma casa para esquerda.\n");
        }else if (dir_rook==3){
            printf("Torre andou uma casa para frente.\n");
        }else if (dir_rook==4){
            printf("Torre andou uma casa para trás.\n");
        }else{
            printf("Erro");
        }
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for(int i=1;i<=mov_queen;i++){
        if(dir_queen==1){
            printf("Rainha andou uma casa para frente e uma casa para direita.\n");
        }else if(dir_queen==2){
            printf("Rainha andou uma casa para trás e uma casa para direita.\n");
        }else if (dir_queen==3){
            printf("Rainha andou uma casa para frente e uma casa para esquerda.\n");
        }else if (dir_queen==4){
            printf("Rainha andou uma casa para trás e uma casa para esquerda.\n");
        }else if(dir_queen==5){
            printf("Rainha andou uma casa para direita.\n");
        }else if(dir_queen==6){
            printf("Rainha andou uma casa para esquerda.\n");
        }else if (dir_queen==7){
            printf("Rainha andou uma casa para frente.\n");
        }else if (dir_queen==8){
            printf("Rainha andou uma casa para trás.\n");
        }else{
            printf("Erro");
        }
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
