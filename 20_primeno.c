#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter a no.");
    scanf("%d",&n);
    if(n==0)
        printf("Special no");
    if(n==1)
        printf("Prime");
    else{
        for(i=1;i<=n;i++)
        {
            if(n%i == 0)
                c++;
        }
        if (c==2)
        {
            printf("Prime");
        }
        else{
            printf("Not prime");
        }
        
    }
}