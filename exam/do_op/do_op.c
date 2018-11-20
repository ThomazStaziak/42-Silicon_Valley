#include <stdlib.h>
#include <stdio.h>

int do_op(int n1, char op, int n2)
{
	int result;

	result = 0;
	if	(op == '+')
		result = n1 + n2;
	else if (op == '-')
		result = n1 - n2;
	else if (op == '*')
		result = n1 * n2;
	else if (op == '/')
		result = n1 / n2;
	else if (op == '%')
		result = n1 % n2;
	return (result);
}

int main(int ac, char **av)
{
	if (ac == 4)
		printf("%i", do_op(atoi(av[1]), av[2][0], atoi(av[3])));
	printf("\n");
	return (0);
}
