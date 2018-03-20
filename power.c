
#include <stdio.h>
void main()
{
    int num,n,count;
    printf("Enter the number\n");
    scanf("%d",&num);
    while (num != 0)
    {
        n = num % 2;
        if (n == 1)
        count++;        
        num = num / 2;
    }
    if(count==1)
    printf("It is a power of 2");
    else
    printf("No");
}
