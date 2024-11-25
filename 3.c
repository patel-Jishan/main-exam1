/*WAP to find the sum of all odd numbers between 1 to n Using Do while loop*/
#include<stdio.h>
int main(){
	int i,num1,num2,sum;
	printf("Enter the 1 number:");
	scanf("%d",&num1);
		printf("Enter the 2 number:");
	scanf("%d",&num2);
	
	do{
		for(i=num1;i<=num2;i++){
			if(i%2==1){
				printf("%d\n",i);
			}
		}
	}
	while(i<sum);
}
