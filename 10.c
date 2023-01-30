//Program to copy values from one array to another, take value from user
#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("Enter any 10 numbers for array one : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nNow enter values for array two : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++)
    {
        a[i]=b[i]+a[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];
    }
    printf("\n\n After swapping array one : ");
    for(i=0;i<10;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n\n After swapping array two : ");
    for(i=0;i<10;i++)
    {
        printf(" %d",b[i]);
    }
    printf("\n\n");
    return 0;
}
