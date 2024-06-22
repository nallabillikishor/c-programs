#include<stdio.h>
int main()
{
    int a,b,res=1;
    printf("Enter  base and power:");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        res *=a;
    }
    printf("%d",res);

}