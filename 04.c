//Find a greatest number stored in a array
#include<stdio.h>
int main()
{
    int a[10],i,greater=0;
    printf("Enter any 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(greater<a[i])
            greater=a[i];
    }
    printf("\n\n\t %d is the greatest among all numbers.\n\n",greater);
    return 0;
}
