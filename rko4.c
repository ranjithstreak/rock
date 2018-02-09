#include<stdio.h>
int main()
{
  int n,a,d,t;
  printf("Enter the value of n,a,d");
  scanf("%d%d%d",&n,&a,&d);
  t = a + (n - 1)*d;
  printf("The value is %d\n",t);
  for(int i=1;i<=n;i++)
  printf("%d",t);
}
