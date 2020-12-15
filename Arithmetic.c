//not allow to perfom arithmetic operation on void pointer
#include<stdio.h>
int main()
{
    int aiData[3] = {100, 200,300};
    void *pvData = &aiData[1]; //address of 200
    
    pvData += sizeof(int);
    
    printf("%d", *(int *)pvData); //300
    
    return 0;
}