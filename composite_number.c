// c program to find the given number is composite number or not
// composite number is a number which is divisible by number other than 1 and the number itself
// or we can say the number have any other divisor also other than 1 and itself
// example---------     6,9,21,33,98,63....................
// 9%1=0   9%3=0  9%9=0    3 is the divisor of 9
// 98%1=0   98%2=0   98%7=0   98%14=0    98%49=0

#include <stdio.h>
int composite(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count != 0)
        printf("composite number\n");
    else
        printf("not a composite number\n");
    return 0;
}
int main()
{
    int n;
    printf("Enter a number to find it is a composite or not\n");
    scanf("%d", &n);
    composite(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star