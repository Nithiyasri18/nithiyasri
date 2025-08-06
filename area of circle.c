#include<stdio.h>
#define pi 3.14
float areaofcircle(float r)
{
 return pi*r*r;
}
int main(){
   float radius,AOC;
    scanf("%f",&radius);
    AOC=areaofcircle(radius);
    printf("the area of circle is %775
           .2f",AOC);
return 0;
}
