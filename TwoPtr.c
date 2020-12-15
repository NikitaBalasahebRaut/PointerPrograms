#include<stdio.h>

int main()
{
	int **y;
    int **x= &y;            //warning: initialization of 'int **' from incompatible pointer type 'int ***'
	y = &x;                //warning: assignment to 'int **' from incompatible pointer type
    printf("%d\n", x);
    return 0;
}

  //OUTPUT
//6422300
