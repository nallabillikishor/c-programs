#include<stdio.h>
int main()
{
    int bmi,h,w;
    printf("Enter the height and weight");
    scanf("%d%d",&h,&w);
    bmi=w/(h*h);
    printf("BMI=%d",bmi);
}