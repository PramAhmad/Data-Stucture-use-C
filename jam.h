// header jam

#ifndef JAM_H
#define JAM_H
#include <stdio.h>
#define Hour(J) (J).HH
#define Minute(J) (J).MM
#define Second(J) (J).SS

typedef struct {
    int HH; 
    int MM; 
    int SS; 
} JAM;


JAM ReadJam();

#endif