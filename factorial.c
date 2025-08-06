#include<stdio.h>
int fact(int n){
    int i,fact=1;
for (i=1;i<=n;i++)
{
    fact*=i;
}
return fact;
}
int main(){
int num;
scanf("%d",&num);
if (num<0)
    printf("invalid");
else
printf("the factorial is %d",fact(num));
return 0;
}
