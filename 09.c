//program to take values from user and print it in reverse order
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter any 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\nEntered values in reverse order : ");
    for(i=0;i<10;i++)
    {
        printf(" %d",a[9-i]);
    }
    printf("\n\n");
    return 0;
}
