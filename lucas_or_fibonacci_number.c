// lucas series is also know as fabonacci series
// number in the series is the sum of the two numuber previous to it
// however for the first two position we define it explicitly
// here in the program we have defined them to be 0 and 1
// the fabonacci series when the given first two number is 0 and 1                0,1,1,2,3,5,8,13,.........
// when a number n is entered the nth term from the series should be printed

#include <stdio.h>
int fabonacci(int n)
{
    int n1 = 0;
    int n2 = 1;
    int n3;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 3; i <= n; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}
int main()
{
    int n;
    printf("Enter the number to print n number in series\n");
    scanf("%d", &n);
    n=fabonacci(n);
    printf("%d\n", n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star