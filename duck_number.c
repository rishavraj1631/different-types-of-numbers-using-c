//duck number
//A Duck number is a number which has zeroes present in it,
//but there should be no zero present in the beginning of the number
//example-----------890,980,909,809(duck number)     but,   099,088,089,098(not a duck number)
#include <stdio.h>
#include <math.h>
int duck(int n)
{
    int zero = 0;
    int len = 0;
    int num = n;
    while (num)
    {
        len++;
        int rem = num % 10;
        if (rem == 0)
        {
            zero++;
        }
        num /= 10;
    }
    num = n;
    if (zero != 0)
    {
        int place = pow(10, len);
        int rem = num % place;
        if (rem != 0)
            printf("%d is a duck number\n", n);
    }
    else
    {
        printf("%d is not a duck number\n", n);
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a number to find it is a duck number or not\n");
    scanf("%d", &n);
    duck(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star