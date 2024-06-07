#include<stdio.h>

int main(){
	
	int x,y,z;
	
	float sum;
	
    printf("enter eny 3 number:");
    
    scanf("%d %d %d",&x,&y,&z);
    
    sum=(x+y+z)/3;
    
    printf("%.2f",sum);
    
    return 0;
}