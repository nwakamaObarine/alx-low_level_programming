#include <stdio.h>
#include "main.h"
/**
 * main - checks code
 *
 * Return 0
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "Worldn";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}
