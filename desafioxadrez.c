#include <stdio.h>

int main(){

    int torre, movtorre, escolha;
    int dama, movdama, escolha1;
    int bispo, movbispo, escolha2;
    char escolha0;
    int cavalo, movcavalo, escolha3;

    do {
    //teste
    printf("\nqual peça vc deseja mover.\n");
    printf("S: sair\n");
    printf("D: dama\n");
    printf("B: bispo\n");
    printf("T: torre\n");
    printf("C. Cavalo\n");
    printf("Escolha S, D, B ou T:");
    scanf("%s", &escolha0);

    switch (escolha0) {
        //Opção de saida
    case 'S':
    case 's':
        printf("Voce escolheu sair!!");
        break;
        //Opção de movimentar a torre
    case 'T':
    case 't':
    do {
    printf("\nEscolha qual movimento vc quer que sua torre faça.\n");
    printf("0: Voltar ao menu de escolha.\n");
    printf("1: Frente.\n");
    printf("2: Tras\n");
    printf("3: Esquerda\n");
    printf("4: Direita\n");
    printf("Digite (0, 1, 2, 3 ou 4)\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 0: 
        printf("\nVoltando ao menu de escolha...\n");
        break;
    case 1:
        printf("Quantas casas sua torre deve andar\n");
        scanf("%d", &movtorre);

        for (torre = 1; torre <= movtorre; torre++)
        {
            printf("Torre se moveu para frente %dx\n", torre);
        }        
        break;
    case 2:
        printf("Quantas casas sua torre deve andar\n");
        scanf("%d", &movtorre);

        for (torre = 1; torre <= movtorre; torre++)
        {
            printf("Torre se moveu para traz %dx\n", torre);
        }
        break;
    case 3:
        printf("Quantas casas sua torre deve andar\n");
        scanf("%d", &movtorre);

        for (torre = 1; torre <= movtorre; torre++)
        {
            printf("Torre se moveu para esquerda %dx\n", torre);
        }
        break;
    case 4:
        printf("Quantas casas sua torre deve andar\n");
        scanf("%d", &movtorre);

        for (torre = 1; torre <= movtorre; torre++)
        {
            printf("Torre se moveu para direita %dx\n", torre);
        }
        break;
    default:
            printf("Opção invalida.\n");
        break;
    }

     } while (escolha < 0 || escolha > 4);
        break;
        //Opção para movimentar a dama
    case 'D':
    case 'd':
    do {
    printf("\nEscolha qual movimento vc quer que sua dama faça.\n");
    printf("0: Voltar ao menu de escolha.\n");
    printf("1: Frente.\n");
    printf("2: Tras\n");
    printf("3: Esquerda\n");
    printf("4: Direita\n");
    printf("5: diagonal cima, direita.\n");
    printf("6: diagonal cima, esquerda\n");
    printf("7: diagonal baixo, direita\n");
    printf("8: diagonal baixo, esquerda\n");
    printf("Digite (0, 1, 2, 3, 4, 5, 6, 7 ou 8)\n");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 0: 
        printf("\nVoltando ao menu de escolha...\n");
        break;
    case 1:
        printf("Quantas casas sua dama deve andar\n");
        scanf("%d", &movdama);

        for (dama = 1; dama <= movdama; dama++)
        {
            printf("Dama se moveu para frente %dx\n", dama);
        }        
        break;
    case 2:
        printf("Quantas casas sua Dama deve andar\n");
        scanf("%d", &movdama);

        for (dama = 1; dama <= movdama; dama++)
        {
            printf("Dama se moveu para traz %dx\n", dama);
        }
        break;
    case 3:
        printf("Quantas casas sua dama deve andar\n");
        scanf("%d", &movdama);

        for (dama = 1; dama <= movdama; dama++)
        {
            printf("Dama se moveu para esquerda %dx\n", dama);
        }
        break;
    case 4:
        printf("Quantas casas sua dama deve andar\n");
        scanf("%d", &movdama);

        for (dama = 1; dama <= movdama; dama++)
        {
            printf("Dama se moveu para direita %dx\n", dama);
        }
        break;
    case 5:
        printf("Quantas casas sua dama deve andar\n");
        scanf("%d", &movdama);

        for (dama = 1; dama <= movdama; dama++)
        {
            printf("Dama se moveu para (diagonal) cima, direita %dx\n", dama);
        }        
        break;
    case 6:
        printf("Quantas casas sua dama deve andar\n");
        scanf("%d", &movdama);

        for (dama = 1; dama <= movdama; dama++)
        {
            printf("Dama se moveu para (diagonal) cima, esquerda %dx\n", dama);
        }
        break;
    case 7:
        printf("Quantas casas sua dama deve andar\n");
        scanf("%d", &movdama);

        for (dama = 1; dama <= movdama; dama++)
        {
            printf("Dama se moveu para (diagonal) baixo, direita %dx\n", dama);
        }
        break;
    case 8:
        printf("Quantas casas sua dama deve andar\n");
        scanf("%d", &movdama);

        for (dama = 1; dama <= movdama; dama++)
        {
            printf("Dama se moveu para (diagonal) baixo, esquerda %dx\n", dama);
        }
        break;
    default:
            printf("Opção invalida.\n");
        break;
    }

    } while (escolha1 < 0 || escolha1 > 8);
        break;
        //opção para movimentar o bispo
    case 'B':
    case 'b':
       do {
    printf("\nEscolha qual movimento vc quer que seu bispo faça.\n");
    printf("0: Voltar ao menu de escolha.\n");
    printf("1: diagonal cima, direita.\n");
    printf("2: diagonal cima, esquerda\n");
    printf("3: diagonal baixo, direita\n");
    printf("4: diagonal baixo, esquerda\n");
    printf("Digite (0, 1, 2, 3 ou 4)\n");
    scanf("%d", &escolha2);

    switch (escolha2)
    {
    case 0: 
        printf("\nVoltando ao menu de escolha...\n");
        break;
    case 1:
        printf("Quantas casas seu bispo deve andar\n");
        scanf("%d", &movbispo);

        for (bispo = 1; bispo <= movbispo; bispo++)
        {
            printf("bispo se moveu para (diagonal) cima, direita %dx\n", bispo);
        }        
        break;
    case 2:
        printf("Quantas casas seu bispo deve andar\n");
        scanf("%d", &movbispo);

        for (bispo = 1; bispo <= movbispo; bispo++)
        {
            printf("bispo se moveu para (diagonal) cima, esquerda %dx\n", bispo);
        }
        break;
    case 3:
        printf("Quantas casas seu bispo deve andar\n");
        scanf("%d", &movbispo);

        for (bispo = 1; bispo <= movbispo; bispo++)
        {
            printf("bispo se moveu para (diagonal) baixo, direita %dx\n", bispo);
        }
        break;
    case 4:
        printf("Quantas casas seu bispo deve andar\n");
        scanf("%d", &movbispo);

        for (bispo = 1; bispo <= movbispo; bispo++)
        {
            printf("Bispo se moveu para (diagonal) baixo, esquerda %dx\n", bispo);
        }
        break;
    default:
            printf("Opção invalida.\n");
        break;
    }

    } while (escolha2 < 0 || escolha2 > 4);
        break;
        //Movimento do cavalo
    case 'C':
    case 'c':
        do
        {
        printf("\nEscolha qual movimento vc quer que seu cavalo faça.\n");
        printf("0: Voltar ao menu de escolha.\n");
        printf("1: cima, cima, direita.\n");
        printf("2: cima, cima, esquerda\n");
        printf("3: baixo, baixo, direita\n");
        printf("4: baixo, baixo, esquerda\n");
        printf("Digite (0, 1, 2, 3 ou 4)\n");
        scanf("%d", &escolha3);

        switch (escolha3)
        {
        case 0: 
            printf("\nVoltando ao menu de escolha...\n");
        break;
        case 1:
        cavalo = 1;
            printf("\nO cavalo se moveu:\n");
            while (cavalo--)
            {
                for (movcavalo = 0; movcavalo < 2; movcavalo++)
                {
                    printf("cima, ");
                }
                printf("direita.\n");           
            }            
        break;
        case 2:
        cavalo = 1;
             printf("\nO cavalo se moveu:\n");
            while (cavalo--)
            {
                for (movcavalo = 0; movcavalo < 2; movcavalo++)
                {
                    printf("cima, ");
                }
                printf("esquerda.\n");           
            }            
        break;
        case 3:
        cavalo = 1;
         printf("\nO cavalo se moveu:\n");
            while (cavalo--)
            {
                for (movcavalo = 0; movcavalo < 2; movcavalo++)
                {
                    printf("baixo, ");
                }
                printf("direita.\n");           
            }
        break;
        case 4:
        cavalo = 1;
         printf("\nO cavalo se moveu:\n");
            while (cavalo--)
            {
                for (movcavalo = 0; movcavalo < 2; movcavalo++)
                {
                    printf("baixo, ");
                }
                printf("esquerda.\n");           
            }
        break;
        default:
                printf("Opção invalida.\n");
            break;
        }

        } while (escolha3 < 0 || escolha3 > 4);
        break;
    default:
        printf("Opção invalida.\n");
        break;
    }
    } while (escolha0 != 's' && escolha0 != 'S');
    
    printf("\n     Saindo...");

    return 0;
}