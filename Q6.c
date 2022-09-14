#include<stdio.h>
int main()
{
    int k,a[10],i,j;
    printf("Enter the values ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    printf("The array after sorting is:");
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }
}
