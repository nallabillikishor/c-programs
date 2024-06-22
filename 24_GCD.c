#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter 2 nos which GCD is to be calculated ");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("GCD = %d",a);
}