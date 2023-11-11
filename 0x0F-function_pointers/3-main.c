#include "3-calc.h"
#include <stdio.h>

/**
* main - program entry point
* @argc: The number of arguments supplied to the program
* @argv: An array of pointers to the arguments
*
* Return: 0 (success)
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;
	
	/** check the number of args supplied */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	
	/** check the operator supplied */
	if (get_op_fun(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	
	/** check if user supplied 0 for '/' or '%' ops*/
	if ((*op == '/' && num2 == 0) || (*op == '/' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));	
	return (0);
}