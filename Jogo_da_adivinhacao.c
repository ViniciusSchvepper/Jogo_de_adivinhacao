#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int segundos = time (0);
    srand(segundos);
    int numerosecreto1;
    int numerosecreto = numerosecreto1 % 100;
    int chute;
    int ganhou = 0;
    int tentativa = 1;
    int nivel;
    int numerodetentativas;
    double pontos = 1000;
   

    printf("Qual o nivel de difculdade voce deseja?\n");
    printf("Facil (1) Medio (2) Dificl (3)\n\n");
    printf("Escolha: ");
    scanf("%d",&nivel);
    
    if(nivel == 1){
        numerodetentativas = 20;
    }
    else if (nivel == 2){
        numerodetentativas = 10;
    }
    else{
        numerodetentativas = 6;
    }

    printf("Bem vindo ao jogo\n");
    for  (int i = 1; i <= numerodetentativas; i++){
        printf("Tentativa %d\n",tentativa);
        printf("Qual o seu chute? ");
        scanf("%d",&chute);
        printf("Seu chute foi %d \n", chute);
        if (chute < 0){
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }
        if(chute == numerosecreto){
            break;
        }
        else if (chute > numerosecreto) {   
            printf("Voce errou, tente novamente.\n");         
            printf("O numero chutado e maior que o numero secreto.\n");
            }
        else {
            printf("Voce errou, tente novamente.\n");
            printf("O numero chutado e menor que o numero secreto.\n");
        }
        tentativa = tentativa + 1;
        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
        
    }
    if (chute == numerosecreto) {
        printf("Parabens voce ganhou!\n");
        printf("Seu numero de tentativas foi %d\n",tentativa);
        printf("Sua pontuacao foi de %.1f\n", pontos);
    }
    else {
        printf("Voce perdeu tente novamente");
    }
}