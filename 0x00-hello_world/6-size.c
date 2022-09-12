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
	
	puts("Size of char: %d byte(s)\n", size(c));
	puts("Size of an int: %d byte(s)\n", sizeof(i));
	puts("Size of a long int: %d byte(s)\n", sizeof(li));
	puts("Size of a lon long int: %d byte(s)\n", sizeof(lli);
	puts("Size of a float: %d byte(s)\n", size(f);
	return (0);
}
