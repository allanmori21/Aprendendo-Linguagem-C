#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    printf ("Bem vindo ao nosso jogo de adivinhacao\n\n");

    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;
    
    int nivel;
    printf("Qual o nivel de dificuldade?: \n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha:");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch (nivel){
        case 1:
        numerodetentativas = 20;
        break;

        case 2:
        numerodetentativas = 15;
        break;

        default:
        numerodetentativas = 5;
        break;
    }

    for (int i = 1; i <= numerodetentativas; i++){
        printf ("Tentativa %d\n", tentativas);
        printf ("Qual eh o seu chute: ");
        scanf ("%d", &chute);

        if (chute < 0){
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou) {
            break;
        }

        else if(maior) {
            printf("Seu chute foi maior que o numero secreto. Tente novamente!\n\n");
            }
        else {
                printf("Seu chute foi menor que o numero secreto. Tente novamente!\n\n");
            }

        tentativas ++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos; 
    }    

    printf ("\n");
    printf ("Fim de jogo!\n");

    if (acertou){
        printf ("Parabens! Voce acertou!\n");
        printf ("Voce acertou em %d tentativas!\n", tentativas);
        printf ("Total de pontos: %.1f\n", pontos);
    } else {
        printf("Voce perdeu! Tente novamente!\n");
    }
}