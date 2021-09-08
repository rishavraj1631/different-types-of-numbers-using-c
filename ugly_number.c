// c program to find the given number is ugly number or not
//ugly numbers are positive numbers whose only prime factors are 2, 3 or 5
// or we can say the number which may have as many as factor but if that factors are prime than they should be 2, 3 or 5 only not any other prime number
// example--------1,2,3,4,5,6,8,9,10
//factors of 5 are 1 and 5
//factors of 10 are 1,2,5,10    though 10 is present but it is not a prime number

#include <stdio.h>
int ugly(int n)
{
    int number = n;
    int count = 0;
    while (n != 1)
    {
        if (n % 5 == 0)
            n = n / 5;
        else if (n % 3 == 0)
            n = n / 3;
        else if (n % 2 == 0)
            n = n / 2;
        else
        {
            count = 1;
            printf("%d is not a ugly number\n", number);
            return 0;
        }
    }
    if (count == 0)
        printf("%d is a ugly number\n", number);
    return 0;
}
int main()
{
    int n;
    printf("Enter a number to find it is a ugly number or not\n");
    scanf("%d", &n);
    ugly(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star