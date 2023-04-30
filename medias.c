/*
Médias

Descrição
Considere as expressões abaixo para cálculo das médias aritmética (A), harmônica (H) e geométrica (G).
Elabore um programa que contenha uma função que receba como parâmetros: o tipo de média a calcular e três números inteiros, e retorne um número real correspondente à média calculada.


Entrada
Um caractere representando o tipo de média (A - aritmética, H - harmônica, G - geométrica) e três números inteiros.

Saída
A média calculada com três casas decimais.
*/
#include <stdio.h>
#include <math.h>

int aritmetica (int x, int y, int z);
int harmonica (int x, int y, int z);
int geometrica (int x, int y, int z);

int main(){

    char media;
    double x, y, z;
    scanf ("%c", &media);
    scanf ("%d", &x);
    scanf ("%d", &y);
    scanf ("%d", &z);

    switch ( media ) {

    case 'G':
        printf("%d", geometrica(x, y, z));
        break;
    case 'H':
        printf("%d", harmonica(x, y, z));
        break;
    case 'A':
        printf("%d", aritmetica(x, y, z));
        break;
    default:
        printf("n");

    }
    return 0;
}



int aritmetica (int x, int y, int z) {
    float resultado;
    resultado = (x + y + z) / 3 ;

    return resultado;

}

int harmonica (int x, int y, int z){
    float resultado;
    resultado = 3 / (1/x+1/y+1/z);

    return resultado;

}

int geometrica (int x, int y, int z){
    float resultado, k;

    k = x*y*z;
    resultado = pow (k,3);

    return resultado;
}

