/*Carlos Alberto está começando um site de vendas online e pediu a sua ajuda para criar um programa que deverá utilizar uma 
estrutura para armazenar as informações de entrega de cada cliente. O programa deverá ler as informações de cada venda até que a 
string lida seja “encerrar” ou o limite de 10 vendas semanais seja atingido.

As informações fornecidas serão:

Nome do cliente;
Quantidade de produtos vendidos;
Valor total da compra;
Cidade de destino do produto;

Após fechar a relação de vendas, imprima na tela a quantidade e o valor total de produtos vendidos naquela semana. Imprima 
também o nome e cidade do cliente com maior valor de venda para que ele receba um brinde junto de seus produtos.

ENTRADA
As informações de cada venda até que a string lida seja “encerrar” ou o limite de 10 vendas seja atingido:

Struct Venda:
Nome do cliente: string de no máximo 40 caracteres;
Quantidade de produtos vendidos: inteiro;
Valor total da compra: float;
Cidade de destino do produto: string de no máximo 30 caracteres;

SAÍDA
A quantidade e o valor total de produtos vendidos com duas casas decimais, seguido do nome e cidade do cliente com maior valor de venda da semana.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

struct Cliente
{
    char nome[40];
    int qtdProdutos;
    float valorCompra;
    char cidade[30];
};

int main() {
    struct Cliente c[10];
    int i, totalVendida = 0;
    float valorTotal = 0;
    float maiorCompra = 0;
    float maiorProduto = 0;

    for (i=0;i<10;i++){
        fflush(stdin);scanf("%40[^\n]",&c[i].nome);fflush(stdin);
        if(strcmp(c[i].nome, "encerrar") == 0){
            break;
        }
        scanf("%d", &c[i].qtdProdutos);
        if (c[i].qtdProdutos > maiorProduto){
            maiorProduto = c[i].qtdProdutos;
        }
        totalVendida += c[i].qtdProdutos;
        scanf("%f", &c[i].valorCompra);
        if (c[i].valorCompra > maiorCompra){
            maiorCompra = c[i].valorCompra;
        }
        valorTotal += c[i].valorCompra;

        fflush(stdin);scanf("%30[^\n]",c[i].cidade);fflush(stdin);


      }

      printf("Quantidade vendida: %d\n", totalVendida);
      printf("Valor arrecadado: %.2f\n", valorTotal);
      for(i=0; (i < 10); i++) {
        if (maiorProduto == c[i].qtdProdutos) {
            printf("%s\n", c[i].nome);
        }
      }
      for(i=0; (i < 10); i++) {
        if (maiorCompra == c[i].valorCompra) {
            printf("%s\n", c[i].cidade);
        }
      }


    getchar();
    return 0;
}
