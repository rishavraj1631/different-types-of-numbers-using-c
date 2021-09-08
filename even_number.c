// c program to find the given number is even number or not
// even number is a number which leaves the remainder as 0 when divided by 2
// or we can say the number which is divisible by 2 is a even number
// example---------     10,12,04,60,100,354,....................
// 10%2=0          354%2=0

#include <stdio.h>
int even(int n)
{
    if (n % 2 == 0)
        printf("even\n");
    else
        printf("not a even\n");
    return 0;
}
int main()
{
    int n;
    printf("Enter a number to find it is a even or odd number\n");
    scanf("%d", &n);
    even(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star