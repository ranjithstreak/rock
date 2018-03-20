#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    clrscr();
    printf("Enter the range:\n");
    scanf("%d%d",&a,&b);
    printf("Enter the number:\n");
    scanf("%d",&c);
    if(c>a&&c<b)
    printf("Yes it is in range");
    else
    printf("No it is not in range");
    getch();
    return 0;
}
