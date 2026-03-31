#include <stdio.h>

// Função para mover as peças
void mover (char nome[], char direcao[]) {
    //nome = nome da peça
    int movimento, movpecas;

    printf("quantas casas, %s deve se mover: ", nome);
    scanf("%d", &movpecas);

    for ( movimento = 1; movimento <= movpecas; movimento++)
    {
        printf("%s se moveu para %s %dx\n", nome, direcao, movimento);
    }
}

//##### MENU DAMA #####
void dama () {
    // variaveis criadas dentro de um void so existem dentro delas, por isso podem ser repetidas.
    int escolha;

    do
    {
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
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 0: printf("Voltando..."); break;
    case 1: mover("dama", "frente"); break;
    case 2: mover("dama", "tras"); break;
    case 3: mover("dama", "esquerda"); break;
    case 4: mover("dama", "direita"); break;
    case 5: mover("dama", "diagonal cima, direita"); break;
    case 6: mover("dama", "diagonal cima esquerda"); break;
    case 7: mover("dama", "diagonal baixo, direita"); break;
    case 8: mover("dama", "diagonal baixo, esquerda"); break;    
    default: printf("Opção invalida."); break;
    }
    } while (escolha < 0 || escolha > 8);    
}
//#### MENU TORRE #####
void torre (){
    // variaveis criadas dentro de um void so existem dentro delas, por isso podem ser repetidas.
    int escolha;

    do
    {
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
    case 0: printf("Voltando..."); break;
    case 1: mover("torre", "frente"); break;
    case 2: mover("torre", "tras"); break;
    case 3: mover("torre", "esquerda"); break;
    case 4: mover("torre", "direita"); break;
    default: printf("Escolha invalida."); break;
    }
    } while (escolha < 0 || escolha > 4);
}
// ##### MENU BISPO #####
void bispo(){

    int escolha;

    do
    {
    printf("\nEscolha qual movimento vc quer que seu bispo faça.\n");
    printf("0: Voltar ao menu de escolha.\n");
    printf("1: diagonal cima, direita.\n");
    printf("2: diagonal cima, esquerda\n");
    printf("3: diagonal baixo, direita\n");
    printf("4: diagonal baixo, esquerda\n");
    printf("Digite (0, 1, 2, 3 ou 4)\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 0: printf("Voltando..."); break;
    case 1: mover("bispo", "diagonal cima, direita"); break;
    case 2: mover("bispo", "diagonal cima, esquerda"); break;
    case 3: mover("bispo", "diagonal baixo, direita"); break;
    case 4: mover("bispo", "diagonal baixo, esquerda"); break;
    default: printf("Opção invalida."); break;
    }
    } while (escolha < 0 || escolha > 4);    
}
//##### MENU CAVALO #####
void cavalo (){

    int cavalo1, movcavalo, escolha;

    do
        {
        printf("\nEscolha qual movimento vc quer que seu cavalo faça.\n");
        printf("0: Voltar ao menu de escolha.\n");
        printf("1: cima, cima, direita.\n");
        printf("2: cima, cima, esquerda\n");
        printf("3: baixo, baixo, direita\n");
        printf("4: baixo, baixo, esquerda\n");
        printf("Digite (0, 1, 2, 3 ou 4)\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 0: 
            printf("\nVoltando...\n");
        case 1:
        cavalo1 = 1;
            printf("\nO cavalo se moveu:\n");
            while (cavalo1--)
            {
                for (movcavalo = 0; movcavalo < 2; movcavalo++)
                {
                    printf("cima, ");
                }
                printf("direita.\n");           
            }            
        break;
        case 2:
        cavalo1 = 1;
             printf("\nO cavalo se moveu:\n");
            while (cavalo1--)
            {
                for (movcavalo = 0; movcavalo < 2; movcavalo++)
                {
                    printf("cima, ");
                }
                printf("esquerda.\n");           
            }            
        break;
        case 3:
        cavalo1 = 1;
         printf("\nO cavalo se moveu:\n");
            while (cavalo1--)
            {
                for (movcavalo = 0; movcavalo < 2; movcavalo++)
                {
                    printf("baixo, ");
                }
                printf("direita.\n");           
            }
        break;
        case 4:
        cavalo1 = 1;
         printf("\nO cavalo se moveu:\n");
            while (cavalo1--)
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
        } while (escolha < 0 || escolha > 4);
    }

    //##### FUNçÂO PRINCIPAL #####
    int main (){
        // variavel
        char escolha0;
        do
        {
        printf("\nqual peça vc deseja mover.\n");
        printf("S: sair\n");
        printf("D: dama\n");
        printf("B: bispo\n");
        printf("T: torre\n");
        printf("C: Cavalo\n");
        printf("Escolha S, D, B ou T:");
        scanf("%s", &escolha0);

        switch (escolha0)
        {
        case 'D':
        case 'd': dama(); 
            break;
        case 'T':
        case 't': torre();
            break;
        case 'B':
        case 'b': bispo();
            break;
        case 'C':
        case 'c': cavalo();
            break;
        case 'S':
        case 's': printf("Saindo...\n");
            break;
        default: printf("Opcao invalida!\n");
        }
        } while (escolha0 != 's' && escolha0 != 'S');

        return 0;
    }