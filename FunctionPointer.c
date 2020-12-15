//poogram to demonstrate the concept of function pointer

#include<stdio.h>

int add(int no1,int no2)              //function defination
{
  return no1+no2;
}

int main()
{
 int ret = 0;
 int (*fp)(int,int);           //function pointer 
 
 fp = add;                    //assignment
 
 ret = fp(10,20);            //call function through function pointer
 printf("\nAddition using function poniter is: %d",ret);
 
 ret = add(10,20);          //call function through function name
 printf("\nAddition by calling function is :%d",ret);
 
return 0;
}