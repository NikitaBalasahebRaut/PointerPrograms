//program to demonstrate the concept ofmultiple  pointer can point to same array

#include<stdio.h>

int main()
{
 int arr[] = {10,20,30,40,50,60};
 int *p = NULL;
 int *q = NULL;
 
 p = arr;             //it holds bydefault first index of array(only name of array means value of first index)
 printf("%d\n",*p);   //10
 
 p = &(arr[0]);          //&arr[0]
 printf("%d\n",*p);   //10
 
 q = &(arr[5]);
 printf("%d\n",*q);   //60
 
 q = &arr;           //10 but it give warning  //warning: assignment to 'int *' from incompatible pointer type 'int (*)[6]' [-Wincompatible-pointer-types]
 printf("%d\n",*q);
 
return 0;

}

/*
output:
10
10
60
10
*/