#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 2;
    } else if (units <= 300) {
        bill = (100 * 2) + ((units - 100) * 3);
    } else {
        bill = (100 * 2) + (200 * 3) + ((units - 300) * 5);
    }

    printf("Total Electricity Bill: ₹%.2f\n", bill);

    return 0;
}
