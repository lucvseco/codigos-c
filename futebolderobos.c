/*Se a quantidade total de gols subiu do 1� para o 2� ano, mas desceu ou permaneceu constante do 2� para o 3�, as pessoas ficam tristes (segunda figura).
Se a quantidade total de gols subiu do 1� para o 2� ano e do 2� para o 3�, mas subiu do 2� para o 3� menos do que subira do 1� para o 2�, as pessoas ficam tristes (terceira figura).
Se a quantidade total de gols desceu do 1� para o 2� ano e do 2� para o 3�, mas desceu do 2� para o 3� no m�nimo o tanto que descera do 1� para o 2�, as pessoas ficam tristes (sexta figura).
Se a quantidade total de gols permaneceu constante do 1� para o 2� ano, as pessoas ficam tristes se baixou do 2� para o 3� ano (oitava figura).
Se a quantidade de gols foi constante nos tr�s anos ou em qualquer outro caso as pessoas ficam felizes.
*/
#include <stdio.h>
int main () {
        int A, B, C, AB, BC;

        scanf ("%d %d %d", &A, &B, &C);

        AB = B - A;
        BC = C - B;

        if (0 > A || 0 > B || 0 > C){
        printf ("esses dados nao valem");
        } else if (A == B && B == C) {
            printf (":)");
        } else if (A < B && B > C && AB > BC ) {
            printf (":(");
        } else if (A > B && B > C && AB >= BC) {
            printf (":(");
        } else if (A == B && B > C) {
            printf (":(");
        } else if (A < B && B >= C) {
            printf (":(");
        } else {
            printf (":)");
        }

return 0;


}
