//Fine average of 10 numbers stored in array
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter any 10 numbers to calculate average : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum = sum + a[i];
    }
    printf("\n\nAverage of");
    for(i=0;i<10;i++)
    {
        printf(" %d",a[i]);
    }
    printf(" is : %d\n\n",sum/10);
    return 0;
}
