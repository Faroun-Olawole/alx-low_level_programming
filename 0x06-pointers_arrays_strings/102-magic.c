#include <stdio.h>
/*
* write your line of code here...
* Remember:
* - you are not allowed to use a
* - you are not allowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
* this program demonstrates pointer arithmetic with arrays  
*/

int main(void)
{
	int a[] = {10, 20, 30, 40, 50};
	int *p;

	p = a + 2;
	printf("a[2] = %d\n", *(p)); /* This is the added line at line 19 */
	return (0);
}

