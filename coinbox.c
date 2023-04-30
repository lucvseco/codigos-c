/*Coin Box Misteriosa

A caminho da fortaleza do Bowser, após um grande tempo de viagem,Mário e Luigi estão a procura
de Life Mushroons para se recuperarem um pouco. No meio da estrada eles vem uma coisa curiosa,
3 CoinBoxes, uma do lado da outra, todas com números diferentes em suas frentes. Olhando um
pouco mais atentamente, eles percebem uma placa dizendo:
"A vida é a maior das Alegrias, a morte é tudo o que Resta."
Logo eles entenderam o que tinham de fazer, abrir a caixa com o maior número a frente tendo 
cuidado com as outras que provavelmente fazem mal.
​Como Mário e Luigi estão em uma situação delicada, para terem certeza que vão escolher a 
caixa certa, eles pedem a você para escrever um programa que, dado 3 números inteiros, retorne
eles em ordem decrescente. Lembre que a vida deles está em suas mãos.

Entrada: 
A entrada consiste em 3 números inteiros em uma mesma linha separados por espaços.

Saída: 
A saída deve ser os números da entrada em ordem decrescente.
*/
#include <stdio.h>

    int main () {

        int x, y, z;
        int temp;

        scanf("%d %d %d", &x, &y, &z);

        if (x < y) {
            temp = y;
            y = x;
            x = temp;
        }
        if (x < z){
            temp = z;
            z = x;
            x = temp;
        }
        if (z > y){
            temp = z;
            z = y;
            y = temp;
    }

        printf ("%d %d %d", x, y, z);
return 0;

}
