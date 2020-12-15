//program to demonstrate the concept of array 

#include<stdio.h>
#define SIZE 5
int main()
{
  int i = 5;
 int arr[] = {10,20,30,40,50,60,70,80};
 int brr[SIZE];
 int crr[i];
     crr[1] = 20;
	 crr[0] = 10;
 
 printf("%d\n",sizeof(brr));  //20 display sizeof brr
 printf("%d\n",arr[2]);       //30
 printf("%d\n",sizeof(crr));   //20
 printf("%d\n",crr[1]);        //20
 return 0;
 }