//Program to find second largest number in array
#include<stdio.h>
int main()
{
    int a[10],i,largest1=0,largest2=0;
    printf("Enter any 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>largest1)
        {
            largest1=a[i];
        }
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>largest2 && a[i]!=largest1)
            largest2=a[i];
    }
    printf("\n\nThe second largest number is %d.\n\n",largest2);
    return 0;
}
