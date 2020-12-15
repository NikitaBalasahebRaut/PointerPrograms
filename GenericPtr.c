//program to demonstrate the concept of generic pointer
#include<stdio.h>
int main()
{
 int no = 11;
 char ch = 'N';
 double d = 20;
 
 void *p = NULL;

 printf("%d \n",no);
 printf("%d \n",&p);   

 p = &no; 
 printf("%d\n",*(int*)p);
 
  p = &ch;
 printf("%c\n",*(char*)p);
 
  p = &d;
 printf("%lf\n",*(double*)p);
 return 0;
 }
 
  // printf("%d \n",*p);         // error: invalid use of void expression // warning: dereferencing 'void *' pointer
  
/*
output:
 11
6422284
11
N
20.000000
*/