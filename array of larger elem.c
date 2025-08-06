#include<stdio.h>
int findlargest(int arr[],int size)
{
int max=arr[0];
for (int i=1;i<size;i++)
{
    if (arr[i]>max)
    {
        max=arr[i];
    }
}
return max;
}
int main(){
 int arr[100],n;
 scanf("%d",&n);
 for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
 }
    int largest=findlargest(arr,n);
    printf("the largest is %d",largest);
return 0;
}
