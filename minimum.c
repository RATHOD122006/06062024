#include<stdio.h>

int main(){
	
	int x,y;
	
	
	printf("enter eny 2 number:");
    
    scanf("%d%d",&x,&y);
    
     if(x<y){
    	
    	printf("%d is minimum number",x);
    	
	}else{
		
		printf("%d is minimum number",y);
		
	}

    return 0;
}