//Program to short elements of an array
#include<stdio.h>
int main()
{
    int a[10],i,j;
    printf("Enter any 10 numbers to short : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }

    }
    printf("\n\nArray after shorting : ");
    for(i=0;i<10;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n\n");
    return 0;
}
