// c program to find the given number is a kaprekar number or not
// kaprekar number is a number which when squared and divided into two parts and added given back the original number
// example--------1,9,45,55,99,297,703,4950,7272,7777,........
// 9^2=81  8+1=9     55^2=3025  =30+25=55    7272^2=52881984    =5288+1984=7272

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int kaprekar(int n)
{
    if (n == 1)
        return 1;
    int sq = n * n;
    int len = 0;
    while (sq)
    {
        len++;
        sq /= 10;
    }
    sq = n * n;
    for (int i = 1; i < len; i++)
    {
        int eq = pow(10, i);
        if (eq == n)
            continue;
        int sum = sq / eq + sq % eq;
        if (sum == n)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a number to find it is a kaprekar number or not\n");
    scanf("%d", &n);
    if (kaprekar(n) == 1)
        printf("%d is a kaprekar number\n", n);
    else
        printf("%d is not a kaprekar number\n", n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star