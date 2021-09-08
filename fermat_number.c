// c program to find and print the fermat prime number
// Fermat prime, prime number of the form ((2^(2^n)) + 1), for some positive integer n.
// example-----------3,5,17,257,65537,..............
// For example, ((2^(2^3)) + 1) = 28 + 1 = 257 is a Fermat prime.
// do not enter the value of n more than 5 else the calculated value of res will go out of range of long int

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    long res;
    printf("enter a number to find the nth fermat number\n");
    scanf("%d", &n);
    res = pow(2, pow(2, n)) + 1;
    printf("%dth fermat number is %ld\n", n, res);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star