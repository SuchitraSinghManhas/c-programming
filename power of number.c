#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int base,power;
    double result;
    scanf("%d%d",&base,&power);
    result=pow(base,power);
    printf("%.0lf",result);
    return 0;
}
