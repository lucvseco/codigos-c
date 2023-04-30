/*Ambrósio e as Pirâmides

Descrição
Ambrósio, seu amigo de longa data (ou não!), fez uma viagem para o Egito e ficou fascinado com as pirâmides de Gizé.
Como ele descobriu que você começou a programar, ele lhe pediu para desenhar uma pirâmide. Lhe será dado a quantidade
de níveis que ela possui (altura), por exemplo, uma pirâmide de 10 níveis, tem 10 linhas de altura.

Entrada
Um inteiro 'P' correspondendo a altura da pirâmide. (Observe os exemplos de entrada!)

Saída
A pirâmide desenhada. (Observe os exemplos de saída!)
*/
# include <stdio.h>
# include <stdlib.h>

int main (){

    int a, i, j=1, backup, backup1, pontos=1, k=0;
    int direita, esquerda;
    scanf ("%d", &a);

    for (i=2; i<a; i++){
    pontos+=1;
    }
    printf ("\n");

    for (i=0; i<a; i++){

	esquerda=pontos;
	direita=pontos;
    k=pontos;

        while (esquerda>=1){
            printf (".");
            esquerda--;
        }
          while(k>0){
            while (k != (2 * i - 1)) { // enquanto k eh diferente de 7
            if (k == 0 || k == 2 * i - 2){
                printf("-");
            }else{
                printf("*");
            }
            k++;
            break;
        }
            break;
          }
        while (direita>=1){
            printf (".");
            direita--;
        }

	pontos--;

    printf ("\n");

	}

return 0;

}



