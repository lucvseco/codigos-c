/*Exportações do Seu Lobato
Imagem anexo https://drive.google.com/file/d/1qr1xaDxKU7Vp0Uhq9JtXoVwXrxk4nH6Q/view?usp=sharing​

Seu Lobato é um renomado agricultor e fazendeiro brasileiro que realiza exportações para países de todo o mundo. Dentre os produtos comercializados por ele estão: Abacaxi, banana, café, caju, laranja, melancia, soja, trigo, além das carnes bovinas e suínas.
Para automatizar o controle das exportações, seu Lobato contratou você, aluno de Computação Eletrônica da UFPE, para criar um programa em linguagem C que pudesse facilitar e auxiliar essa tarefa.
Seu Lobato também deixou um arquivo para auxiliar no seu programa, contendo os continentes e a taxa de frete correspondente, além dos produtos, com sua identificação e preço por lote.
Além de utilizar seus conhecimentos em estruturas, use também funções!
OBS.: Lembre-se que as transações internacionais são realizadas em dólares!

Adote U$ 1.00 = R$ 5,17

Entrada
O programa receberá um número inteiro N, que representará o número de operações a fazer no código. Caso N seja 0, o programa deve imprimir a mensagem "Sem negoacioes por hoje!".

Para cada negociação, existem os seguintes dados:
Nome do comprador ou empresa (até 30 caracteres)
País de destino (até 30 caracteres)
Continente de destino (até 10 caracteres)
Código do produto comercializado (inteiro)
Quantidade de lotes do produto comercializado (inteiro)
Caso o código do produto não exista, o programa deve imprimir "Operacao invalida!".

Saída
A saída do seu programa deve conter as seguintes informações:
Nome do comprador ou empresa
País de destino
Nome do produto
Custo do produto (Em dólares)
Custo do frete (Em dólares)
Total a pagar
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float soja(){
    float valorProduto;
     valorProduto = 163.43 * 5.17;
    return valorProduto;
}
float cafe(){
    float valorProduto;
     valorProduto = 123.09 * 5.17;
    return valorProduto;
}
float laranja(){
    float valorProduto;
     valorProduto = 179.53 * 5.17;
    return valorProduto;
}
float banana(){
    float valorProduto;
     valorProduto = 193.78 * 5.17;
    return valorProduto;
}
float trigo(){
    float valorProduto;
     valorProduto = 156.66 * 5.17;
    return valorProduto;
}
float melancia(){
    float valorProduto;
     valorProduto = 249.51 * 5.17;
    return valorProduto;
}
float abacaxi(){
    float valorProduto;
     valorProduto = 221.75 * 5.17;
    return valorProduto;
}
float carneBovina(){
    float valorProduto;
     valorProduto = 457.85 * 5.17;
    return valorProduto;
}
float caju(){
    float valorProduto;
     valorProduto = 173.98 * 5.17;
    return valorProduto;
}
float carneSuina(){
    float valorProduto;
     valorProduto = 376.91 * 5.17;
    return valorProduto;
}

struct Operacao {
    char nome[30];
    char pais[30];
    char continente[10];
    int idProduto;
    int qtdProdutos;
    float valorFrete;
    char produto[30];
    float valorProduto;
    float custoProduto;
    float precoTotal;
};

int main(){
    int i;
    int operacoes;
    int avalia;

    struct Operacao o[operacoes];
    scanf("%d", &operacoes);
    if(operacoes == 0){
        printf("Sem negociacoes por hoje!");
        }
    for (i=1;i<=operacoes;i++){
        fflush(stdin);scanf("%30[^\n]",&o[i].nome);fflush(stdin);
        fflush(stdin);scanf("%30[^\n]",&o[i].pais);fflush(stdin);
        fflush(stdin);scanf("%10[^\n]",&o[i].continente);fflush(stdin);
        if(strcmp(o[i].pais, "Africa") == 0){
            o[i].valorFrete = 250;
        }
        else if(strcmp(o[i].pais, "America") == 0){
            o[i].valorFrete = 150;
        }
        else if(strcmp(o[i].pais, "Asia") == 0){
            o[i].valorFrete = 450;
        }
        else if(strcmp(o[i].pais, "Europa") == 0){
            o[i].valorFrete = 300;
        }
        else if(strcmp(o[i].pais, "Oceania") == 0){
            o[i].valorFrete = 400;
        }
        scanf("%d", &o[i].idProduto);

        switch (o[i].idProduto)
        {
        case 700:
            strcmp(o[i].produto, "Soja");
            o[i].custoProduto = 163.43;
            soja();
            break;
        case 701:
            strcmp(o[i].produto, "Cafe");
            o[i].custoProduto = cafe();

            break;
        case 702:
            strcmp(o[i].produto, "Laranja");
            o[i].custoProduto = laranja();

            break;
        case 703:
            strcmp(o[i].produto, "Banana");
            o[i].custoProduto = banana();

            break;
        case 704:
            strcmp(o[i].produto, "Trigo");
            o[i].custoProduto = trigo();

            break;
        case 705:
            strcmp(o[i].produto, "Melancia");
            o[i].custoProduto = melancia();

            break;
        case 706:
            strcmp(o[i].produto, "Abacaxi");
            o[i].custoProduto = abacaxi();

            break;
        case 707:
            strcmp(o[i].produto, "Carne bovina");
            o[i].custoProduto = carneBovina();
            break;
        case 708:
            strcmp(o[i].produto, "Caju");
            o[i].custoProduto = caju();
            break;
        case 709:
            strcmp(o[i].produto, "Carne suina");
            o[i].custoProduto = carneSuina();
            break;
        }
    scanf("%d", o[i].qtdProdutos);

    o[i].precoTotal = o[i].custoProduto + o[i].valorFrete;

    }
    for(i=1; (i <= operacoes); i++) {
        printf("%s\n", o[i].nome);
        printf("%s\n", o[i].pais);
        printf("%s\n", o[i].produto);
        printf("%.2f\n", o[i].custoProduto);
        printf("%.2f\n", o[i].valorFrete);
        printf("%.2f\n", o[i].precoTotal);
      }


    return 0;
}
