//Find a smallest number stored in a array
#include<stdio.h>
int main()
{
    int a[10],i,smaller;
    printf("Enter any 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    smaller=a[0];
    for(i=1;i<10;i++)
    {
        if(smaller>a[i])
            smaller=a[i];
    }
    printf("\n\n\t %d is the smallest among all numbers.\n\n",smaller);
    return 0;
}
