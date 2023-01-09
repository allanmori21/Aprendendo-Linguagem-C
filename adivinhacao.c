#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main (){
    printf ("Bem vindo ao nosso jogo de adivinhacao\n");

    int numerosecreto = 42;
    int chute;
    int i;

    for (i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
        printf ("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf ("Qual eh o seu chute: ");
        scanf ("%d", &chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        int menos = chute < numerosecreto;

        if(acertou) {
            printf("Parabens! Voce acertou!\n");
            break;
        }

        else if(maior) {
            printf("Seu chute foi maior que o numero secreto. Tente novamente!\n");
            }
        else if (menor) {
                printf("Seu chute foi menor que o numero secreto. Tente novamente!\n");
            }
        }
    }    
    printf ("Fim de jogo!\n");
}