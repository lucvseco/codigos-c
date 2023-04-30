/*A prova na Escola Salvatore

Descrição

A Escola Salvatore para Jovens Especiais aceita seres sobrenaturais de todo tipo de espécie, o que inclui
vampiros, lobisomens, bruxas, sifonadoras, híbridas, tríbridas, fênix… 
Um professor de habilidades relacionadas a velocidade precisa avaliar os alunos quanto a velocidade média
em 1 prova, que consiste em numa quadra reta e plana os estudantes especiais demonstrarão sua habilidade.
Por isso, ele resolveu pedir sua ajuda.
Crie um programa que dadas as posições dos estudantes em um intervalo de tempo, calcule a 
velocidade média do estudante, usando float  velmed (float p1, float p5, int t), e caso 
solicitado dê também a média das posições, usando a função float media (float p1, float p2,
float p3, float p4, float p5), o desvio padrão, usando float desvio (float p1, float p2,
float p3, float p4, float p5, float med), o desvio padrão da média, usando float desviopadrao
(float desv) e a variância, usando float variancia (float desv).

Entrada
5 valores reais representando as posições;
O intervalo de tempo inteiro (em segundos) gasto da posição 1 a 5; 
Dois caracteres, separados por espaço, para solicitar ou não a média e/ou desvio padrão, respectivamente.

Saída
Um valor real, com duas casas decimais,  correspondente à velocidade média
E caso solicitados valores reais, com duas casas decimais, representando a média das posições e/ou os desvios.
*/
#include <stdio.h>
#include <math.h>

float velmed (float p1, float p5, int t)
{
    float velmedia;
    velmedia = (p5 - p1) / t;
    return velmedia;
}
float media (float p1, float p2, float p3, float p4, float p5)
{
    float media;
    media = (p1+p2+p3+p4+p5) / 5;
    return media;
}
float desvio (float p1, float p2, float p3, float p4, float p5, float med)
{
    float desvioPadrao;
    desvioPadrao = sqrt (((p1 - med)*(p1 - med) + (p2 - med)*(p2 - med) + (p3 - med)*(p3 - med) + 
    (p4 - med)*(p4 - med) + (p5 - med)*(p5 - med)) / 5);
    return desvioPadrao;
}
float desviopadrao (float desv)
{
    float desvioPM;
    desvioPM = sqrt ((desv * desv)/ 5);
    return desvioPM;
}
float variancia (float desv)
{
    float var; 
    var = desv * desv;
    return var;
}
int main()
{
    float p1, p2, p3, p4, p5, t, mediaVel, desvioPmd, vari, desv, med;
    char opcao1, opcao2, opcao;
    scanf ("%f %f %f %f %f", &p1, &p2, &p3, &p4, &p5);
    scanf ("%f", &t);
    scanf ("%c", &opcao);
    mediaVel = velmed (p1, p5, t);
    printf ("Velocidade media: %.2f\n", mediaVel);
    med = media (p1,p2,p3,p4,p5);
    desv = desvio ( p1, p2, p3, p4, p5, med);
    desvioPmd = desviopadrao (desv);
    vari = variancia (desv);

    switch (opcao1)
    {
        case 'v':
        printf ("Variancia: %.2f\n", vari);
        break;
        case 'm':
        printf ("Media: %.2f\n", med);
        break;
        case 'd':
        printf ("Desvio padrao: %.2f\n", desv);
        printf ("Desvio padrao da media: %.2f\n", desvioPmd);
        break;
        case 'V':
        printf ("Variancia: %.2f\n", vari);
        break;
        case 'M':
        printf ("Media: %.2f\n", med);
        break;
        case 'D':
        printf ("Desvio padrao: %.2f\n", desv);
        printf ("Desvio padrao da media: %.2f\n", desvioPmd);
        default:
        printf("");
        break;
    } 
    switch (opcao2)
    {
        case 'v':
        printf ("Variancia: %.2f\n", vari);
        break;
        case 'm':
        printf ("Media: %.2f\n", med);
        break;
        case 'd':
        printf ("Desvio padrao: %.2f\n", desv);
        printf ("Desvio padrao da media: %.2f\n", desvioPmd);
        break;
        case 'V':
        printf ("Variancia: %.2f\n", vari);
        break;
        case 'M':
        printf ("Media: %.2f\n", med);
        break;
        case 'D':
        printf ("Desvio padrao: %.2f\n", desv);
        printf ("Desvio padrao da media: %.2f\n", desvioPmd);
        default:
        printf("");
        break;
    }  
    switch (opcao)
    {
        case 'v':
        printf ("Variancia: %.2f\n", vari);
        break;
        case 'm':
        printf ("Media: %.2f\n", med);
        break;
        case 'd':
        printf ("Desvio padrao: %.2f\n", desv);
        printf ("Desvio padrao da media: %.2f\n", desvioPmd);
        break;
        case 'V':
        printf ("Variancia: %.2f\n", vari);
        break;
        case 'M':
        printf ("Media: %.2f\n", med);
        break;
        case 'D':
        printf ("Desvio padrao: %.2f\n", desv);
        printf ("Desvio padrao da media: %.2f\n", desvioPmd);
        default:
        printf("");
        break;
    }  
}
