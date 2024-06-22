#include<stdio.h>
int main()
{
    int n,n1,rem,rev=0;
    printf("Enter a number");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(n1==rev)
        printf("Pallindrome");
    else
        printf("Not Pallindrome");
}