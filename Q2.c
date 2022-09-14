#include<stdio.h>
int main()
{
    float a[10],s=0;
    printf("Enter the value ");
    for(int i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
        s=s+a[i];
    }
    s=s/10;
    printf("The average is %0.2f",s);
}
