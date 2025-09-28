#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float lcm,lm,lkm;
    scanf("%f",&lcm);
    lm=lcm/100;
    lkm=lcm/100000;
    printf("%.2f %.2f",lm,lkm);
    return 0;
}
