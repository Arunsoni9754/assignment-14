#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("Enter the first array ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
    }
    printf("The new array is ");
    for(i=0;i<=9;i++)
    {
        printf("%d ",b[i]);
    }
}
