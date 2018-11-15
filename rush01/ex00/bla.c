#include <stdio.h>

int *test()
{
	int array[6] = {1, 2, 3, 4, 5, 6};
	return (array);
}

int main()
{
 int i;

 i = 0;

 printf("%i", test());
}
