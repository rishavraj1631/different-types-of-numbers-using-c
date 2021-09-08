// c program to find the given number is deficient number or not
// A number n is said to be Deficient Number if sum of all the divisors of the number denoted by divisorsSum(n) is less than twice the value of the number n.
// And the difference between these two values is called the deficiency.
// example------1,2,3,5,13,14,22,31,44,45,.................
// The proper factors of 15 are 1, 3, and 5. Since 1 + 3 + 5 = 9 and 9 is smaller than 15, 15 is deficient.

#include <stdio.h>
int deficient(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    printf("sum=%d\n", sum);
    if (sum < (n))
    {
        printf("%d is a deficient number\n", n);
        printf("deficiency of the given number is %d\n", (n - sum));
    }
    else
        printf("%d is not a deficient number\n", n);
    return 0;
}
int main()
{
    int n;
    printf("Enter the number to find it is a deficient number or not\n");
    scanf("%d", &n);
    deficient(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star