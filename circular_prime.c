// c program to find the given number is a circular prime or not
// A prime number is said to be a circular prime if after any cyclic permutations of the digits, it remains a prime
// example------- 113,1193,..............
// all circular permutations of 113( 311 and 131 )are isPrime

#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
    if (n == 1 || n == 2)
        return 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 1;
    }
    return 0;
}
int isCircularPrime(int n)
{
    int count = 0, temp = n;
    int rem, div;
    while (temp)
    {
        count++;
        temp /= 10;
    }
    int num = n;
    while (isPrime(num))
    {
        rem = num % 10;
        div = num / 10;
        num = (pow(10, count - 1)) * rem + div;
        if (num == n)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the number to find it is a circular prime number or not\n");
    scanf("%d", &n);
    if (isCircular_prime(n))
        printf("%d is a circular prime number\n", n);
    else
        printf("%d is not a circular prime number\n", n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star