#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int p;
    float r,t,i;
    scanf("%d%f%f",&p,&r,&t);
    i=(p*r*t)/100;
    printf("%.2f",i);
    
    return 0;
}
