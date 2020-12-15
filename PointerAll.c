//program to demonstrate the concept of pointer

#include<stdio.h>

int main()
{
 int no = 11;
 int *p = &no;
 int **q = &p;
 int ***r = &q;
 int ****x = &r;
 int *****y = &x;
 
 printf("%d\n",&no); //6422296
 printf("%d\n",no);  //11
 printf("%d\n",*p);  //11
 printf("%d\n",**x);  //6422292
 printf("%d\n",**y);  //6422292
 printf("%d\n",&y);  //6422280
 printf("%d\n",*****y);//11
 printf("%d\n",**q);   //11
 printf("%d\n",q);     //6422296
 printf("%d\n",&q);    //6422292
 printf("%d\n",***r);  //11
 printf("%d\n",&(**x));//6422292
 printf("%d\n",&(****y));//6422296
 printf("%d\n",&(*p));//6422300
 
return 0;
}