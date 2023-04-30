/*Escreva um programa que leia os valores (reais) dos raios de dois círculos diferentes e informe qual dos dois possui área maior ou se possuem a mesma área.

Use pi = 3.14

Entrada: 
Os raios (tipo float) de 2 círculos em sequência.

Saída: 
Caso a área do primeiro círculo seja maior, escreva na saída: "Primeiro círculo"
Caso a área do segundo círculo seja maior, escreva na saída: "Segundo círculo"
Caso sejam iguais, escreva: "Iguais"
*/
#include <stdio.h>


    int main () {
        float raio1, raio2, area1, area2;

        scanf ("%f\n%f", &raio1, &raio2);


        area1 = raio1 * 3.14 * raio1;
        area2 = raio2 * 3.14 * raio2;

        if (area1 > area2) {
            printf("Primeiro circulo");
        } else if (area2 > area1) {
            printf ("Segundo circulo");
        } else if (area1 == area2){
            printf ("Iguais");
        }

return 0;
}
