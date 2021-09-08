// this is also know as armstrong number
//A Narcissistic decimal number is a non-negative integer, n that is equal
//to the sum of the m-th powers of each of the digits in the decimal representation
//of n, where m is the number of digits in the decimal representation of n.
// example-------153,370,1634,8208,54748
// 153=(1^3)+(5^3)+(3^3)=1+125+27=153
// 370=(3^3)+(7^3)+(0^0)=27+343+0=370
// 1634=(1^1)+(6^4)+(3^4)+(4^4)=1+1296+81+256=1634

#include <stdio.h>
#include <math.h>
int narcissistic(int n)
{
    int num = n;
    int len = 0;
    int sum = 0;
    while (n)
    {
        n /= 10;
        len++;
    }
    n = num;
    while (n > 0)
    {
        int rem = n % 10;
        sum += pow(rem, len);
        n /= 10;
    }
    if (sum == num)
        printf("%d is a narcissistic number\n", num);
    else
        printf("%d is not a narcissistic number\n", num);
    return 0;
}
int main()
{
    int n;
    printf("Enter the number to find it is narcissistic number or not\n");
    scanf("%d", &n);
    narcissistic(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star