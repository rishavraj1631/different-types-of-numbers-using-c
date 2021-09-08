// c program to find the given number is abundant number or not
// A number n is said to be Abundant Number if sum of all the divisors of the number is greater than twice the value of the number n.
// And the difference between these two values is called the deficiency.
// example------12,18,20,24,48,54,66,70,114,.................
// The proper factors of 12 are 1, 2, 3, 4, and 6. Since 1+2+3+4+6= 16 and 16 is greater than 12, 12 is abundant.

#include <stdio.h>
int abundant(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    printf("sum=%d\n", sum);
    if (sum > (n))
        printf("%d is an abundant number\n", n);
    else
        printf("%d is not a abundant number\n", n);
    return 0;
}
int main()
{
    int n;
    printf("Enter a number to find it is a abundant number\n");
    scanf("%d", &n);
    abundant(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star