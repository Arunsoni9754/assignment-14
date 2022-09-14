#include<stdio.h>
int main()
{
    int a[10],s=0,i;
    printf("Enter the values ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("The sum is %d",s);
}
