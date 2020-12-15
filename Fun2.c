# include <stdio.h>
void fun(int *ptr)
{
    *ptr = 30;
}
 
int main()
{
  int y = 20;
  fun(&y);
  printf("%d", y);
 
  return 0;
}

/*output 
30
because we pass the adress of variable y then changed the value of y from 20 to 30
*/