#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char a;
    int b;
    float f;
    double d;
    scanf("%c%d%f%lf",&a,&b,&f,&d);
    printf("%c %d %.2f %lf", a,b,f,d);
    return 0;
}
