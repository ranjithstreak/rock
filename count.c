#include<stdio.h>
#include<conio.h>
int main()
{
    int a,c=0;
    clrscr();
    printf("Enter the number:\n");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        c++;
    }
    printf("The number of digits is %d",c);
    getch();
    return 0;
}
