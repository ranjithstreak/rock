#include<stdio.h>
void main()
{
int a[50],i,j,n,t,h,k;
printf("enter the array");
scanf("%d",&n);
printf("enter the value");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<(n-i-1);j++)
{
    if(a[j]>a[j+1])
    {
       t=a[j];
       a[j]=a[j+1];
       a[j+1]=t;
    }
}
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
for(i=0;i<n;i++)
{
    h=h+a[i];
}
k=h/n;
printf("The average is %d",k);
}
