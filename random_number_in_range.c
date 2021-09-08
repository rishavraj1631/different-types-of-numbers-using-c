// c program to print a random number in the given range
// enter the lower and upper limit between which random number is to be printed 
// // tme(0) if not used program will print the same random number again and again for a specific given range
// if time is not used and range is given 10 and 20 and 16 is given as the random number between 10 and 20
// and if program is again compiled and run for range between 10 and 20 it will again give 16 as the random number
// if 12 and 17 is also entered then also 16 will only come because it is fall in the given range of 12 and 17

#include <stdio.h>
#include <stdlib.h>
// #include <time.h>
int random_range(int lower, int upper)
{
    // srand(time(0));
    int num = (random() % (upper - lower + 1)) + lower;
    printf("%d\n", num);
    return 0;
}
int main()
{
    int lower, upper;
    printf("Enter the range x and y to find random number between them\n");
    scanf("%d%d", &lower, &upper);
    random_range(lower, upper);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star