//write a c program for given a number “n”, find if it is Disarium or not.
//disarium or unhappy number both are same
//A number is called Disarium if sum of its digits powered with their respective positions is equal to the number itself.
//exampe  135=1^1 + 3^2 + 5^3
//        89=8^1 + 9^2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int leng(int n)
{
    int len = 0;
    int num = n;
    while (n)
    {
        len++;
        n = n / 10;
    }
    return len;
}
int disarium(int n)
{
    int rem = 0, sum = 0;
    int len = leng(n);
    int num = n;
    while (num)
    {
        rem = num % 10;
        sum += pow(rem, len);
        num /= 10;
        len -= 1;
    }
    if (sum == n)
        printf("%d is a disarium\n", n);
    else
        printf("%d is not a disarium\n", n);
    return 0;
}
int main()
{
    int n;
    printf("Enter a number to find it is a disarium number or not\n");
    scanf("%d", &n);
    disarium(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star