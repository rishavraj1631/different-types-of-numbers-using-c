//c program to find the given number is a harshad number or not
//number is divisible by the sum of its digit
//132---      1+3+2=6       132%6=0
// 18----     1+8=9          18%9=0
//all number 0 to 10 are harshad nnumber
//other examples------24,27,30,84,90,132,198,200,.........

#include <stdio.h>
int harshad(int n)
{
    int sum = 0;
    int num = n;
    while (num)
    {
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }
    if (n % sum == 0)
        printf("%d is a harshad number\n", n);
    else
        printf("%d is not a harshad number\n", n);
    return 0;
}
int main()
{
    int n;
    printf("Enter the number to find it is a harshad number or not\n");
    scanf("%d", &n);
    harshad(n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star