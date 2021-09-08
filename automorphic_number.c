//c program to find the given number is a automorphic number or not
//automorphic numberis a number whose square ends with the same digits as the original number
//5^2 =25      6^2 = 36
//other example                76,376,..............

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int automorphic(int n)
{
    int sq = n * n;
    int num = n;
    int len = 0;
    while (num)
    {
        len++;
        num /= 10;
    }
    int m = floor(pow(10, len));
    int last = sq % m;
    if (last == n)
        printf("%d is a automorphic number\n", n);
    else
        printf("%d is not a automorphic number\n", n);
    return 0;
}
int main()
{
    int n;
    printf("Enter a number to find it is a automorphic or not\n");
    scanf("%d", &n);
    automorphic(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star