//Program to find second smallest number in array
#include<stdio.h>
int main()
{
    int a[10],i,smallest1,smallest2;
    printf("Enter any 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest1=a[0];
    smallest2=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]<smallest1)
        {
            smallest1=a[i];
        }
    }
    for(i=0;i<10;i++)
    {
        if(a[i]<smallest2 && a[i]!=smallest1)
            smallest2=a[i];
    }
    printf("\n\nThe second smallest number is %d.\n\n",smallest2);
    return 0;
}
