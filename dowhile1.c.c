#include<stdio.h>

main(){
	
	int a;
	
	printf("enter a 1 number:");
	
	scanf("%d",&a);
	
	do{
		
		printf("%d\n",a);
		
		a++;
		
	}
	
	while(a<=10);
	
}