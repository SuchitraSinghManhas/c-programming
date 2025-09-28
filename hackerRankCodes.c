#Hello World Problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    printf("Hello, World!");
    return 0;
}


#Perform Input Output

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


#Academic Performance Calculator.

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


#Area and Perimeter of geometric shapes

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


#Euclidean distance.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){     
    float x1,y1,x2,y2,dist; 
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%.2f",dist);
    return 0;
}



