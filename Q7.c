#include<stdio.h>
int main()
{
   int a[10],n;
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
            
            n=a[i];
            a[i]=a[0];
            a[0]=n;    
        }
    }
    for(i=2;i<=9;i++)
    {
        if(a[1]<a[i])
        {
            a[1]=a[i];
        }
    }
    printf("The second largest number is %d",a[1]);
}
