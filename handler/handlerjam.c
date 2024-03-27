#include <stdio.h>
#include <jam.h>

JAM MakeJam(int h, int m, int s){
    JAM j1;
    j1 = MakeJam(h, m, s);
    printf("%d:%d:%d", Hour(j1), Minute(j1), Second(j1));
}

void ReadJam(JAM *j){
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    *j = MakeJam(h, m, s);
    printf("%d:%d:%d", Hour(*j), Minute(*j), Second(*j));
}


void WriteJam(JAM j){
    printf("%d:%d:%d", Hour(j), Minute(j), Second(j));
}
