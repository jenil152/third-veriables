#include<stdio.h>

main()

{
	int a,b,c;
	
	printf("Enter value a=");
	scanf("%d",&a);
	
	printf("Enter value b=");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("swapping value a=%d & b=%d",a,b);
	
}
