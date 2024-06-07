#include<stdio.h>

int main(){
	
	int x,y;
	
	int sum;
	
    printf("enter eny 2 number:");
    
    scanf("%d %d",&x,&y);
    
    sum=(x*x-2*x*y+y*y);
    
    printf("%d",sum);
    
    return 0;
}