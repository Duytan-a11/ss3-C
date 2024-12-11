#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter a 4-digit integer: ");
    scanf("%d", &n);
    // n / 1000 : get the thousands digit.
    // (n / 100) % 10 : get the hundreds digit.
    // (n / 10) % 10 : get the tens digit.
    // n % 10 : get the units digit.

    sum = (n / 1000) + ((n / 100) % 10) + ((n / 10) % 10) + (n % 10);
    
    printf("The sum of 4 numbers = %d", sum);

    return 0;
}
