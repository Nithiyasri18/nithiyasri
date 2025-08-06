#include<stdio.h>
int isprime(int number){
if (number<=1)
    return 0;
for(int i=2;i<=number/2;i++){
if (number%i==0)
return 0;
}
return 1;
}
int main()
{
    int num;
    scanf("%d",&num);
    if (isprime(num))
        printf("it is prime no:%d",num);
    else
        printf("it is not prime no:%d",num);

    return 0;
}
