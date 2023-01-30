//Program to calculate sum of odd and even numbers saparetly
#include<stdio.h>
int main()
{
    int a[10],i,odd=0,even=0;
    printf("Enter any 10 numbers to find sum : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            even=even+a[i];
        else
            odd=odd+a[i];
    }
    printf("\n Addition odd numbers is %d, and even %d.\n\n",odd, even);
    return 0;
}
