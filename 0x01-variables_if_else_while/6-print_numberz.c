#include <stdio.h>

#include <unistd.h>



/**
* main - prints out all numbers under 10
* without using any char variables
* Return: 0
*/

int main(void)
{
	
	int a;
	
	for (a = 0; a < 10; a++)
		putchar(a + '0');
	putchar('\n');
	return (0);
}
