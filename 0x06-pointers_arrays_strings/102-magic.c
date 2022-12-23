#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[5];
p = &n;
/*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anythin else than this line of code.
 */
p[5] = 98;
/* print ...so thaf this prints 98\n*/
printf("a[2] = %d\n", a[2]);
return (0);
}
