#include<stdio.h>

main()
{
	int a;
	
	printf("Enter Value A = ");
	scanf("%d",&a);
	
	if(a<0){
		printf("Value A is negative");
	}
	else if(a==0){
		printf("Value A is neutral");
	}
	else if(a>0){
		printf("Value A is positive");
	}
		
}