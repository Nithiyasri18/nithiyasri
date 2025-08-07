#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter total units consumed: ");
    scanf("%d",&units);

    if (units<=100)
    {
        bill = 100*2;
    }
else if (units>=300)
         {
             bill = (100*2) + ((units-100)*3);
         }
         else
            {
                bill = 200+600+((units - 300)*5);
            }
    printf("Total Electricity Bill: ₹%.2f\n", bill);

    return 0;
}
