#include<stdio.h>
int main()
{
   int a[10];
    int i;
    printf("Enter the values ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=9;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];    
        }
    }
    printf("The largest number is %d",a[0]);
}
