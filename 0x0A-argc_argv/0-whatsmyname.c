#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments passed to the functions
 * @argc: argument vector of pointes to string
 * Return: always 0
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
