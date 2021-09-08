// c program to find the given number is a perfect cube or not
// perfect cube number is a number that gives the integer number as the result
// when the 3rd cube root of the given number is taken it gives the integer as the result
// example--------1,8,27,64,125,...........
// 8=2*2*2            27=3*3*3            125=5*5*5

#include <stdio.h>
#include <math.h>
int main()
{
    int n, cube_root;
    printf("Enter a number to find it is a perfect cube or not\n");
    scanf("%d", &n);
    cube_root = round(pow(n, 1.0 / 3.0));
    if ((cube_root * cube_root * cube_root) == n)
        printf("%d is a perfect cube\n", n);
    else
        printf("%d is not a perfect cube\n", n);
    return 0;
}

// code by rishavraj1631(github)
// if it helped you just give a star