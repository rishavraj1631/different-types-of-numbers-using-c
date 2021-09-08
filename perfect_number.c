// c program to find the given number is perfect number or not
// perfect number is a positive integer that is equal to the sum of its proper divisors
// the smallest perfect number is 6, which is sum of 1,2 and 3
// 6%1=0   6%2=0  6%3=0            1+2+3=6
// example---------6,28,496,8126,....................

#include <stdio.h>
int perfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        printf("%d is a perfect number\n", n);
    else
        printf("%d is not a perfect number\n", n);
    return 0;
}
int main()
{
    int n;
    printf("Enter a number to check for perfect or not\n");
    scanf("%d", &n);
    perfect(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star