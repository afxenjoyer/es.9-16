#include <math.h>
#include "dist2punti.h"

float DistanzaTra2Punti(float x1, float y1, float x2, float y2)
{
    float risultato = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return risultato;
}