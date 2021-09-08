// c program to find the nth mersenne number for the enter the value of n
// mersenne number is always an odd number it can never be an even number
// mersenne number for the value of n can be find by the formula ((2^n) -1)
// example--------1,3,7,15,31,63,127,...........
// 2^5 -1=32-1=31

#include <stdio.h>
#include <math.h>
int mersenne(int n)
{
    int res = pow(2, n) - 1;
    printf("%d th mersenne numeber is %d\n", n, res);
    return 0;
}
int main()
{
    int n;
    printf("Enter a number to find the nth mersenne number or not\n");
    scanf("%d", &n);
    mersenne(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star