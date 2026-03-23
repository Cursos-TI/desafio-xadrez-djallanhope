#include <stdio.h>

int main(){

    /* Você deverá criar um único programa em C que simule o movimento de três peças:
    Torre, Bispo e Rainha. Para cada peça, utilize uma estrutura de repetição diferente (for, while ou do-while)
    
    - Torre: Move-se em linha reta horizontalmente ou verticalmente. 
    Seu programa deverá simular o movimento da Torre cinco casas para a direita.

    - Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. 
    Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").

    - Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
    */

    //Variaveis
    int torre = 1, bispo = 1, rainha = 1;
    int movtorre, movbispo, movrainha;

    //Movimento da torre
    printf("Insira quantas casas a torre deve se mover: ");
    scanf("%d", &movtorre);

    while (torre <= movtorre)
    {
        printf("Torre se moveu para cima %dx\n", torre);
        torre++;        
    }
    
    //movimento do bispo
    printf("\nInsira quantas casas o bispo deve andar: ");
    scanf("%d", &movbispo);

    do
    {
        printf("O bispo se moveu para a diagonal (cima, direira) %dx\n", bispo);
        bispo++;
    } while (bispo <= movbispo);

    //movimento da dama
    printf("\nInsira quantas casas a rainha deve se mover: ");
    scanf("%d", &movrainha);

    for (rainha; rainha <= movrainha; rainha++)
    {
        printf("A Rainha se moveu para a esquerda %dx\n", rainha);
    }
        

    return 0;
}