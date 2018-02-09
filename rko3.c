#include <stdio.h>
int main()
{
  int n1, n2, i, t, num, r;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &n1, &n2);
  printf("Armstrong numbers between %d an %d are: ", n1, n2);
  for(i=n1+1; i<n2; ++i)
  {
      t=i;
      num=0;
      while(t!=0)
      {
          r=(t%10);
          num+=r*r*r;
          t/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
