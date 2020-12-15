//program to display all elements of arrry using pointer

#include<stdio.h>

int main()
{
  int arr[5]= {5,4,6,8,9};
  int *p = &arr[0];              //holds the adress of first element of array
  
  int i = 0;
  
  for(i = 0;i < 5; i++)
  {
    printf("\nArray[%d] is %d",i,*p+i);    //display array element with index
  }
  for(i = 0; i < 5; i++)
  {
	  printf("\n %d at %u",*(p+i),(p+i));     //display array element with adress
  }
}

/*
output
Array[0] is 5
Array[1] is 6
Array[2] is 7
Array[3] is 8
Array[4] is 9
 5 at 6422276
 4 at 6422280
 6 at 6422284
 8 at 6422288
 9 at 6422292
 */