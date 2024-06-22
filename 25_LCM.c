
#include<stdio.h>

int gcd(int ,int );
int gcd(int a, int b)
{
    int temp;
    while (b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int a,b,lcm;
    printf("Enter 2 nos which lcm to be calculated:");
    scanf("%d%d",&a,&b);
    lcm=(a*b)/gcd(a,b);
    printf("%d",lcm);
}