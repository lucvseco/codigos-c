/*
Batalha Pokémon

Descrição
Serra e seus amigos estavam jogando pokémon no seu gameboy color antes de uma monitoria de 
matemática discreta que um dos seus amigos ia ministrar. Como todos devem conhecer, Pokémon é um
jogo onde as batalhas são baseadas em turnos, onde, em cada turno, o pokémon mais rápido pode usar 
sua habilidade primeiro. Cada pokémon tem uma quantidade inteira de vida V e um dano inicial inteiro D. 
A batalha termina quando um dos pokémons perde toda sua vida. Como Serra e seus amigos não são muito bons 
nesses novos jogos de pokémon, seus pokémons principais possuem apenas duas habilidades, um ataque de dano,
que se escolhido causa um dano D igual ao dano atual do pokémon no seu adversário, e outra habilidade especial
que se escolhida aumenta permanentemente o seu dano em 50 unidades. Um de seus amigos, Bezaliel, disse para
Serra que ele deveria sempre usar o ataque de dano, visto que a outra habilidade era “inútil”. Já seu outro
amigo, Clodes, usando como base seus conhecimentos em matemática discreta, falou que ocasionalmente usar a
habilidade especial do seu pokémon pode ser a diferença entre ganhar ou perder uma batalha. Depois de muita
discussão sobre qual era a melhor estratégia, Clodes e Bezaliel decidiram resolver suas diferenças em uma
batalha pokémon onde cada treinador deveria se manter fiel a sua estratégia (Bezaliel vai atacar todos os
turnos até derrotar o inimigo ou perder tentando, enquanto Clodes vai usar a habilidade de incrementar o
dano de seu pokémon até chegar num ponto que não possa mais perder e só então começar a atacar).
Em um turno, um pokémon pode usar APENAS UMA de suas habilidades.
Considere que o pokémon de Clodes é o mais rápido, ou seja, ele sempre ataca primeiro.
Considere que cada treinador joga de maneiro ótima, se mantendo sempre fiel a sua estratégia.


Entrada
No início você receberá um numero  1 <= n <= 1000, o numero de batalhas a serem disputadas (considere que cada batalha é independente).
Em seguida, você receberá n linhas contendo quarto números inteiros cada, V1, V2, D1 e D2, onde V1 é a vida do pokemon 
de Clodes e D1 seu dano inicial. V2 e D2 são a vida e dano inicial do pokemon de Bezaliel, respectivamente.
1 <=V1, V2, D1, D2 <= 1000000

Saída
Para cada batalha, sua resposta deve ser uma única linha contendo “Clodes” ou “Bezaliel”, sem aspas, o nome do treinador que deverá ganhar aquela batalha.
*/
#include <stdio.h>

int main(){
    int n_batalhas, v1,v2,d1,d2;
    int i, turno_atual, qtd_turnos;

    scanf("%d", &n_batalhas);

    i = 1;
    while(i<= n_batalhas) {
        scanf("%d %d %d %d", &v1, &v2, &d1, &d2);

        qtd_turnos = v2/d1;
        turno_atual = 1;
        while(v1 > 0 && v2 > 0){
            if (((qtd_turnos - turno_atual) * d1) > v2 ){
                v2 -= d1;
            }
            else {
                d1 += 50;
            }
            v1 -= d2;
            //printf("%d %d %d %d \n",v1,v2,d1,d2);
            turno_atual++;
        }
        //printf("%d %d %d %d \n",v1,v2,d1,d2);

        if(v1 > 0)
            printf("Clodes");
        else
            printf("Bezaliel");
        if(i != n_batalhas)
            printf("\n");
        i++;
    }
}
