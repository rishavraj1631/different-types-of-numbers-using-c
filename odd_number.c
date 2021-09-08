// c program to find the given number is odd number or not
// odd number is a number which leaves the remainder as 1 when divided by 2
// or we can say the number which is not divisible by 2 is a odd number
// example---------     33,49,3,1,6879,56563,....................
// 49%2=1          56563%2=1

#include <stdio.h>
int odd(int n)
{
    if (n % 2 != 0)
        printf("odd number\n");
    else
        printf("not a odd number\n");
    return 0;
}
int main()
{
    int n;
    printf("Enter the number to find it is odd or not\n");
    scanf("%d", &n);
    odd(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star