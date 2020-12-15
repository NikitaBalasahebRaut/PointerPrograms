//program to demonstrate the concept of A constant pointer thse pogram not run give compile time error

#include<stdio.h>
int main(void)
{
    int var1 = 10, var2 = 20;
    //Initialize the pointer
    int *const ptr = &var1;
    //Try to modify the pointer value
    ptr = &var2;                                // error: assignment of read-only variable 'ptr'
    printf("%d\n", *ptr);
    return 0;
}