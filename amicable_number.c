//c program to find the given number is a amicable number or not
//Amicable numbers are two different numbers so related that the
//sum of the proper divisors of each is equal to the other number.
//The first ten amicable pairs are: (220, 284), (1184, 1210), (2620, 2924),
//(5020, 5564), (6232, 6368), (10744, 10856), (12285, 14595), (17296, 18416),
//(63020, 76084), and (66928, 66992).
#include <stdio.h>
int proper_divisor(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int amicable(int m, int n)
{
    if (proper_divisor(m) == proper_divisor(n))
        printf("%d and %d are amicable number\n", m, n);
    else
        printf("%d and %d are not amicable number\n", m, n);
    return 0;
}
int main()
{
    int m, n;
    printf("To find the given numbers are amicable number or not\n");
    printf("Enter the first number\n");
    scanf("%d", &m);
    printf("Enter the second number\n");
    scanf("%d", &n);
    amicable(m, n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star