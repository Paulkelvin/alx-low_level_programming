#include <stdio.h>
/*
 12    * write your line of code here...
 13    * Remember:
 14    * main - magic
 15    * - you are not allowed to use a
 16    *   - you are not allowed to modify p
 17    *   - only one statement
 18    *   - you are not allowed to code anything els    e than this line of code
 19    */

int main(void)
{
        int n;
        int a[5];
        int *p;

        a[2] = 1024;
        p = &n;
        *(p + 5) = 98;
        printf("a[2] = %d\n", a[2]);
        return (0);
}
