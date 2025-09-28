#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
    float r,areac,perimeterc;
    scanf("%f",&r);
    areac=3.1416*r*r;
    perimeterc=3.1416*2*r;
    printf("Circle: %.2f %.2f\n",areac,perimeterc);
    float s,areas,perimeters;
    scanf("%f",&s);
    areas=s*s;
    perimeters=4*s;
    printf("Square: %.2f %.2f\n",areas,perimeters);
    float l,w,arear,perimeterr;
    scanf("%f%f",&l,&w);
    arear=l*w;
    perimeterr=2*(l+w);
    printf("Rectangle: %.2f %.2f\n", arear,perimeterr);
    return 0;
}
