#include <stdio.h>

int main()
{
    int n, reversed;
    
    printf("Enter a 4-digit integer: ");
    scanf("%d", &n);
    
    // n / 1000 : get the thousands digit.
    // (n / 100) % 10 : get the hundreds digit.
    // (n / 10) % 10 : get the tens digit.
    //. n % 10 : get the units digit.
    int thousand = n / 1000, hundred = (n / 100) % 10, ten = (n / 10) % 10, unit = n % 10;
    
    reversed = unit * 1000 + ten * 100 + hundred * 10 + thousand;
    
    printf("The number has been reversed: %d", reversed);

    return 0;
}
