//c program to find the givrn number is pronic or heteromecic number or not
//number is the product of two consecutive number   (n)*(n+1)
//20=4*5        30=5*6          90=9*10
//other examples------72,90,110,132,156,182,210,240,.........

#include <stdio.h>
#include <stdlib.h>
int pronic(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            if (i * (i + 1) == n)
            {
                printf("%d is a pronic/heteromecic number\n", n);
                exit(0);
            }
        }
    }
    printf("%d is a not pronic/heteromecic number\n", n);
    return 0;
}
int main()
{
    int n;
    printf("Enter the number to find it is a pronic/heteromecic number\n");
    scanf("%d", &n);
    pronic(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star