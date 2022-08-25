#include <stdio.h>
#include <math.h>
int main(void)
{
    int numsets;
    int forks;
    int spoons;
    int cs;
    int fsum = 0;
    int ssum = 0;
    int cssum = 0;
    int diners = 0;
    scanf("%d", &numsets);
    int farray[numsets];
    int sarray[numsets];
    int csarray[numsets];
    for (int i = 0; i < numsets; i++){
        scanf("%d %d %d", &forks, &spoons, &cs);
        farray[i] = forks;
        sarray[i] = spoons;
        csarray[i] = cs;
    }
    int length = sizeof(farray)/sizeof(farray[0]);
    for (int i = 0; i < length; i++) {
        fsum = fsum + farray[i];
    }
    int slength = sizeof(sarray)/sizeof(sarray[0]);
    for (int i = 0; i < slength; i++) {
        ssum = ssum + sarray[i];
    }
    int cslength = sizeof(csarray)/sizeof(csarray[0]);
    for (int i = 0; i < slength; i++) {
        cssum = cssum + csarray[i];
    }
    int chop = cssum/2;
    if (fsum < ssum && fsum < chop) {
        printf("%i", fsum);
    }
    else if (ssum < fsum && ssum < chop) {
        printf("%i", ssum);
    }
    else {
        printf("%i", chop);
    }
}