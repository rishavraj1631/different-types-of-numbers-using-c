// c program to find the number is lychrel number or not
// Lychrel Number is a natural number that cannot form a palindrome through the
// iterative process of repeatedly reversing its digits and adding the resulting numbers.
// example--------196,295,394,493,592,689,691,788,790,879,887,978,986
// 196             196+reverse of 196          196+691=887

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool palindrome(unsigned long long int i);
unsigned long long int reverse(unsigned long long int i);
bool lychrel(unsigned long long int i);

int main(void)
{
    unsigned long long int i = 0;
    int count = 0, num1;
    printf("Enter the number to check it is a Lychrel number or not: \n");
    scanf("%d", &num1);
    if (lychrel(num1))
    {
        printf(" The given number is Lychrel.\n");
    }
    else
    {
        printf(" The given number is not Lychrel.\n");
    }
    return 0;
}
bool lychrel(unsigned long long int i)
{
    int j; /*iteration counter*/
    bool lychrel = true;
    i = i + reverse(i);

    for (j = 1; j <= 30; j++)
    {
        if (palindrome(i))
        {
            lychrel = false;
            break;
        }
        i = i + reverse(i);
    }

    return lychrel;
}
unsigned long long int reverse(unsigned long long int i)
{
    unsigned long long int ret = 0;
    while (i != 0)
    {
        ret *= 10;
        ret += i % 10;
        i /= 10;
    }
    return ret;
}
bool palindrome(unsigned long long int i)
{
    return (i == reverse(i));
}

// code by rishavraj1631(github)
// if it helped you just give a star