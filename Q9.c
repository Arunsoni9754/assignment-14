#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter the values ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array in reverse order is ");
    for(i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
