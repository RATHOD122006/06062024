#include<stdio.h>

int main(){
	
	int x,y;
	
	
    printf("enter eny 2 number:");
    
    scanf("%d %d",&x,&y);
    
    x=x-y;
    y=x+y;
    x=y-x;
    
    printf("%d  %d",x,y);
    
    return 0;
}