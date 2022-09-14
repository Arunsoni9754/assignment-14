#include<stdio.h>
int main()
{
    int a[10],i,e=0,o=0;
    printf("Enter the value");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            e=e+a[i];
        }
        else
        {
            o=o+a[i];
        }
    }
    printf("The sum of all even numbers is %d\n",e);
    printf("The sum of all odd numbers is %d",o);
}    
