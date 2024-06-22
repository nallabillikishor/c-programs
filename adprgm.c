#include <stdio.h>
int add (int,int);

int main(){
	int num1, num2, sum;

	printf("enter 1st num: ");
	scanf("%d", &num1);

	printf("enter 2nd num: ");
	scanf("%d", &num2);

	sum = add(num1,num2);

	printf("sum: %d\n",sum);

	return 0;
}
