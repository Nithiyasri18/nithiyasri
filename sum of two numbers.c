//wap that calculates the sum of two numbers using function
#include<stdio.h>
int add(int a , int b)
{
  return a + b;
}
int main(){
 int num1,num2,result;
 scanf("%d %d",&num1,&num2);
 result = add(num1,num2);
 printf("the sum is %d",result);
return 0;
}
