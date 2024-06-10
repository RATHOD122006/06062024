#include<stdio.h>

int main(){
	
	int a,b;
	
	int t1=0,t2=1,next;
	
	printf("enter a number:");
	
	scanf("%d",&a);
	
	for(b=1;b<=a;b++){
		
		if(b==1){
			
		printf("%d",t1);
		
		continue;
		
		}
		
		if(b==2){
			
		printf("%d",t2);
		
		continue;
		
		}
		
		next=t1+t2;
		
		t1=t2;
		
		t2=next;
		
		printf("%d",next);
		
		
		
		
	}
}