#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float English,Mathematics,Science,Computer,History,total,average,percentage;
    scanf("%f%f%f%f%f",&English,&Mathematics,&Science,&Computer,&History);
    total=English+Mathematics+Science+Computer+History;
    average=total/5;
    percentage=(total/500)*100;
    printf("%.0f %.2f %.2f",total,average,percentage);    
    return 0;
}
