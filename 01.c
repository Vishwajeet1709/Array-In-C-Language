//Calculate the sum of 10 values stroed in a array, taking input from user
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter any 10 numbers to calculate sum : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum = sum + a[i];
    }
    printf("\n\nAddition of");
    for(i=0;i<10;i++)
    {
        printf(" %d",a[i]);
    }
    printf(" is : %d\n\n",sum);
    return 0;
}
