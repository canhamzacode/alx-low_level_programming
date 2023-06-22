#include "3-calc.h"
/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;

	int (*myOperator)(int, int);

	if (argc > 4)
	{
		printf("Error\n");
		return (1);
	}
	myOperator = get_op_func(argv[2]);

	if (myOperator == NULL)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));
	return (0);
}
