#include <stdio.h>

int main (){
    printf ("Bem vindo ao nosso jogo de adivinhacao\n");

    int numerosecreto = 42;
    int chute;
    int i;
    int tentativas = 1;

    while (1){
        printf ("Tentativa %d\n", tentativas);
        printf ("Qual eh o seu chute: ");
        scanf ("%d", &chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (chute < 0){
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }

        else if(acertou) {
            printf("Parabens! Voce acertou!\n");
            break;
        }

        else if(maior) {
            printf("Seu chute foi maior que o numero secreto. Tente novamente!\n");
            }
        else {
                printf("Seu chute foi menor que o numero secreto. Tente novamente!\n");
            }

        tentativas ++;
    }    
    printf ("Fim de jogo!\n");
    printf ("Voce acertou em %d tentativas!\n", tentativas);
}