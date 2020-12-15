//dangling pointer
include<stdio.h>
#include<stdlib.h>
int main()
{
    int *piData = NULL;
    //creating integer of size 10.
    piData = malloc(sizeof(int)* 10);
    //make sure piBuffer is valid or not
    if (piData == NULL)
    {
        // allocation failed, exit from the program
        fprintf(stderr, "Out of memory!\n");
        exit(1);
    }
    //free the allocated memory
    free(piData);
    
    //piData is dangling pointer
    *piData = 10;
    
    printf("%d",*piData);
    
    return 0;