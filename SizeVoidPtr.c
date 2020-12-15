//program to demonstrate the size of void pointer
#include<stdio.h>
int main()
{
	printf("%d", sizeof(void *));//4    --->sizeof void is 1 and the sizeof void pointer is 4
	return 0;
}