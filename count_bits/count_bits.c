#include <stdio.h>

unsigned long count_bits(unsigned long x);
void binary_display(int n);


int main()
{
    int n, counter;
    printf("\nPlease enter a number:\n");
    scanf("%d", &n);
    printf("\n%d entered\n",n);
    printf("\nA binary represnt:\n");
    counter = count_bits(n);
    printf("\nThere is %d on bits on even index \n", counter);
    return 0;
}

unsigned long count_bits(unsigned long x)
{
    int counter=0;
    binary_display(x);
    while (x)
    {
        if (x & 1)
            counter++;
        x >>= 2;
    }

    return counter;
}

void binary_display(int n){
    if (n > 1)
        binary_display(n / 2);

    printf("%d", n % 2);
}











