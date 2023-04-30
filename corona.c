/*Corona: Ep 2
Descrição
Em uma viagem pela Europa, Pedro Jorge, carinhosamente chamado de PJ, resolveu conhecer a Itália. Infelizmente o momento não era o melhor para o país, então em poucos dias de estadia, PJ se deparou em uma situação crítica, onde as ruas estão cheias de pessoas infectadas com o COVID-19 sem que saibam com certeza. Mas como PJ é um programador exemplar, ele criou um sistema que acoplado a um óculos de realidade aumentada que permite com que ele saiba quem está infectado e assim ele pode saber com quem evitar contato. Você fará um programa que simula o programa feito por PJ.

Entrada
Seu programa receberá três números inteiros onde 0 <= a, b, c <= 1000.

Saída
Seu programa deverá imprimir "Seguro" caso não exista um número primo entre esses números, "Possível Risco" caso haja apenas um número primo e "Perigo" caso haja mais de um número primo. Sempre com uma quebra de linha.
*/
#include <stdio.h>

int main () {

    int num1, num2,  num3, i, j, k, divisores1 = 0 , divisores2 = 0, divisores3 = 0;

    scanf("%d %d %d", &num1, &num2, &num3);

    for (i = 2; i <= num1 ; i++) {
        if (num1 % i == 0) {
       divisores1++;

       }
    }
    for (j = 2; j <= num2 ; j++) {
        if (num2 % j == 0) {
       divisores2++;

       }
    }

    for (k = 2; k <= num3 ; k++) {
        if (num3 % k == 0) {
       divisores3++;

       }
    }

    if (divisores1 != 1 && divisores2 == 1 && divisores3 == 1) {
        printf("Perigo\n");
    }else if (divisores1 == 1 && divisores2 != 1 && divisores3 == 1){
        printf("Perigo\n");
    }else if (divisores1 == 1 && divisores2 == 1 && divisores3 != 1){
        printf("Perigo\n");
    }else if (divisores1 != 1 && divisores2 != 1 && divisores3 == 1){
        printf("Possivel risco\n");
    }else if (divisores1 != 1 && divisores2 == 1 && divisores3 != 1){
        printf("Possivel risco\n");
    }else if (divisores1 == 1 && divisores2 != 1 && divisores3 != 1){
        printf("Possivel risco\n");
    }else if (divisores1 != 1 && divisores2 != 1 && divisores3 != 1){
    printf("Seguro");
    }else {
    printf("todos primos");
    }


return 0;
}



