#include <stdio.h>

/**
 * main prints the size of various types
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	
	printf("Size of char: %d byte(s)\n", size(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(li));
	printf("Size of a lon long int: %d byte(s)\n", sizeof(lli);
	printf("Size of a float: %d byte(s)\n", size(f);
	return (0);
}
