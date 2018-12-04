#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int *ap;

	a = 7;
	ap = &a;
	printf("the address of a is %p""\nthe value of aptr is %p", &a, ap);

	printf("\n\nthe value of a is %d""\nthe value of *aptr is %d", a, *ap);

	printf("\n\nshowing that * and & are complements of ""each other\n&*aptr = %p""\n*&aptr = %p\n", &*ap, *&ap);

	system("pause");
	return 0;

}