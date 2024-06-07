#include<stdio.h>

int main(){
	
	int x;
	
	
    printf("enter eny 1 number:");
    
    scanf("%d",&x);
    
    if(x<0){
    	
    	printf("this number is negative number:");
    	
	}else if(x==0){
		
		printf("this number is netural number");
		
	}else{
		
		printf("this number is positive number");
	}
    
    return 0;
}