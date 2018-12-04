#include<stdio.h>
#include<stdlib.h>

int cub(int n);

int main(void)
{
	int num = 5;
	printf("the original value if number is %d", num);

	num = cub(num);

	printf("\nthe new value of number is %d\n", num);
	system("pause");
	return 0;
}

int cub(int n)
{
	return n * n*n;
}
