#include<stdio.h>

int main(){
	
	int x,y;
	
	int z;
	
    printf("enter eny 2 number:");
    
    scanf("%d %d",&x,&y);
    
    z=x;
    x=y;
    y=z;
    
    printf("%d  %d",x,y);
    
    return 0;
}