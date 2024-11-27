#include <stdio.h>
#include "dist2punti.h"

int main(void)
{
    float x1, x2 = 0;
    float y1, y2 = 0;
    float risultato = 0;

    printf("Inserisci x1\n");
    scanf("%f", &x1);
    printf("Inserisci y1\n");
    scanf("%f", &y1);
    printf("Inserisci x2\n");
    scanf("%f", &x2);
    printf("Inserisci y2\n");
    scanf("%f", &y2);

    risultato = DistanzaTra2Punti(x1, y1, x2, y2);

    printf("La distanza tra i due punti inseriti è di %.2f\n", risultato);
    return 0;
}
