#include<stdio.h>
int main()
{
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    switch (n%2)
    {
    case 0:
        printf("Even");
        break;
    case 1:
        printf("odd");
        break;
    default:
        break;
    }
}