#include <stdio.h>
/**
 * main - prints the number of arguments excluding the file name
 * @argc: number of command line arguments
 * @argv: array containing the program commandline argument
 * Return: 0 - sucess
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
