// c program to find the given number is a perfect square or not
// perfect square number is a number that gives the integer number as the result
// when the 2nd root of the given number is taken it gives the integer as the result
// example--------1,4,9,16,25,36,49,64,...........
// 4=2*2          9=3*3            25=5*5*5       64=8*8

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to find it is a perfect square or not\n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n == i * i)
        {
            printf("%d is a perfect square\n", n);
            return 0;
        }
    }
    printf("%d is not a perfect square\n", n);
    return 1;
}

// code by rishavraj1631(github)
// if it helped you just give a star