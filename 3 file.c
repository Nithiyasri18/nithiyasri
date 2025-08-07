#include <stdio.h>
int main ()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if (a>=b && a>=c)//25>=50 f
{
    printf("%d it is largest",a);
}
else if (b>=a && b>=c)
{
    printf ("%d it is largest",b);
}
else
{
    printf("%d it is larger",c);
}
return 0;
}

//write a program to find the largest of three numbers using if-else if ladder.25 50 30
