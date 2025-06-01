#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movtorre(int t){
    if (t <= 5)
    {
        printf("Direita!\n"); // O Programa faz um looping para que seja escrito direita, representando o movimento da torre
        movtorre(t + 1);
    }
    
}

void movbispo(int b){
    // faz um looping para que o printf seja executado 5 vezes.

    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 1; j++)
        {
            printf("Direita, ");
        }
        printf("cima!\n");
    }
    
    if (b <= 4)
    {
        movbispo(b + 1);
    }
    
}

void movrainha(int r){
    if (r <= 8)
    {
        printf("Esquerda!\n"); // Aqui o programa imprimirá o que está dentro do Do-while 8 vezes.
        movrainha(r + 1);
    }
    
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    
    // variáveis definidas.
    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;

    printf("#Movimento da torre#\n");
    //Looping criado com recursividade para imprimir o movimento da Torre.
    movtorre(torre);
 
    printf("\n#Movimento do Bispo#\n");
    //Looping para imprimir o movimento do Bispo.
    movbispo(bispo);
    
    printf("\n#Movimento da Rainha#\n");
    //Looping para imprimir o movimento da Rainha.
    movrainha(rainha);
    
    printf("\n#Movimento do cavalo#\n");
    //Looping para imprimir o movimento do cavalo.
    for (cavalo = 1; cavalo < 1 || cavalo == 1; cavalo++) // Looping externo
    {   
        if (cavalo != 1) break;

        for (int i = 1; i < 2 || i == 2; i++) // Looping interno
        {
            if (i > 2) break;
            printf("cima!\n");
        }
        printf("Direita!\n");
    }

    return 0;
}
