#include<stdio.h>

int main (){
	int mark;
	
	printf("enter your mark:\n");
	
	scanf("%d",&mark);

	if(mark<=100&&mark>=90){
		
		printf("a+ grade");
		
	} else if (mark<=90&&mark>=80){
		
		printf("a grade");
		
	} else if (mark<80&&mark>=70){
		
		printf("b+ grade");
		
	} else if (mark<70&&mark>=60){
		
		printf("b grade");
		
	} else if (mark<60&&mark>=45){
		
		printf("c grade");
		
	}  else if (mark<45&&mark>=35){
		
		printf("d grade");
		
	} else {
		
		printf("fail (better luck next time)");
		
	}
}