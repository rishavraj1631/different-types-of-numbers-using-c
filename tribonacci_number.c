// c program to find and print the tribonacci
// tribonacci series
// number in the series is the sum of the three numuber previous to it
// however for the first three position we define it explicitly
// here in the program we have defined them to be 0 ,1 and 1
// the tribonacci series when the given first three number are 0 , 1 and 1    is            0,1,1,2,4,7,13,24,44,81,149,.........
// when a number n is entered the nth term from the series should be printed

#include <stdio.h>
int tribonacci(int n)
{
    int n1 = 0;
    int n2 = 1;
    int n3 = 1;
    int n4;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n == 3)
        return 1;
    for (int i = 4; i <= n; i++)
    {
        n4 = n1 + n2 + n3;
        n1 = n2;
        n2 = n3;
        n3 = n4;
    }
    return n4;
}
int main()
{
    int n;
    printf("Enter the number to print first n tribonacci numner\n");
    scanf("%d", &n);
    n = tribonacci(n);
    printf("%d\n", n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star