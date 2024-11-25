/*WAP to find Minimum from a given 3 number using nested if else.*/
#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter the 1 number:");
	scanf("%d",&num1);
		printf("Enter the 2 number:");
	scanf("%d",&num2);
		printf("Enter the 3 number:");
	scanf("%d",&num3);
	if(num1<num2){
		if(num1<num3){
			printf("%d",num1);
		}
		else{
			printf("%d",num3);
		}
		
	}
	else{
		if(num2<num3){
			printf("%d",num2);
		}
		else{
			printf("%d",num3);
		}
	} 
	
		
	}
	
