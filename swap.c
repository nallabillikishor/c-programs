#include <stdio.h>

int main(){

	int a,b;

	printf("Enter the value of a":);
	scanf("%d",&a);
	print ("enter the value of b":);
	scanf("%d",&b);
	printf("bef swap 1st num bswp:%d\n 2nd num bswp:%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("aftr swap 1st num aswp:%d\n 2nd num aswp:%d\n",a,b);

	return 0;
}

