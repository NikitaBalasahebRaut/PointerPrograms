////program to demonstrate the concept of Pointer to a constant: thse pogram not run give compile time error

#include<stdio.h>
int main(void)
{
    int var1 = 100;
    // pointer to constant integer
    const int* ptr = &var1;
    
    //try to modify the value of pointed address
    *ptr = 10;                                    // error: assignment of read-only location '*ptr'
    
    printf("%d\n", *ptr);
    return 0;
}