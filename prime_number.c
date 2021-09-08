// c program to find the given number is prime number or not
// prime number is a number which is divisible by 1 and the number itself
// or we can say the number do not have any divisor other than 1 and itself
// exception 2 is the only even prime number
// example---------     2,3,5,13,23,37,109,....................

#include <stdio.h>
int prime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count > 0)
        printf("not a prime number\n");
    else
        printf("prime number\n");
    return 0;
}
int main()
{
    int n;
    printf("Enter the number to find it is a prime or not\n");
    scanf("%d", &n);
    prime(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star