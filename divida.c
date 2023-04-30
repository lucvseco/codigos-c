/*
Pague sua Dívida!

Crie um programa que receba como entrada o valor total de uma dívida (número natural maior que zero) e
o valor máximo que o devedor pode pagar todo mês (número natural maior que zero).
O programa deve exibir o restante da dívida antes e depois de cada pagamento mensal até que a dívida seja zero.

Obs.: quando a dívida é menor do que o máximo que o devedor pode pagar, ele pagará exatamente quanto deve, jamais pagará um valor superior.

Entrada: 
Na primeira linha um valor natural maior que zero indicando o valor da dívida; na segunda linha o valor máximo que o
devedor pode pagar por mês (novamente um valor natural maior que zero).

Saída: 
O valor da dívida restante antes do pagamento mensal e o valor da dívida restante após o pagamento mensal, conforme o formato nos exemplos. Repetir enquanto a dívida não zerar.
*/#include <stdio.h>


int main() {

    int divida, saldo, novaDivida, dividaAntiga;

    scanf("%d", &divida);
    scanf("%d", &saldo);

    novaDivida = saldo - divida;
    if (novaDivida >= 0){
        novaDivida = 0;
        printf("(antes) %d\n", divida);
        printf("(depois) %d\n", novaDivida);

    }else{
    printf("(antes) %d\n", divida);
    printf("(depois) %d\n", novaDivida* -1);
    while (novaDivida < 0){
        dividaAntiga = novaDivida * -1;
        novaDivida = novaDivida + saldo;
        printf("(antes) %d\n", dividaAntiga);
        printf("(depois) %d\n", novaDivida * -1);
    }
    }


return 0;
}
