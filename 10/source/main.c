#include<stdio.h>
#include<stdlib.h>

void cub(int *np);

int main(void)
{
	int num = 5;
	printf("the original value if number is %d", num);

	cub(&num);

	printf("\nthe new value of number is %d\n", num);
	system("pause");
	return 0;
}

void cub(int *np)
{
	*np = *np * *np * *np;
}