#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter Value A = ");
	scanf("%d",&a);
	
	printf("Enter Value B = ");
	scanf("%d",&b);
	
	if(a<b){
		printf("%d is Minimum",a);
	}
	else{
		printf("%d is Minimum",b);
	}
	
}