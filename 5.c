/*WAP to count the number of digits in a number Using a while loop. Link:   no=1234  output = 4 digits*/
#include<stdio.h>
int main(){
	int num, count=0;
	printf("Enter the 1 number:");
	scanf("%d",&num);
	while(num>0){
		num=num/10;
	count++;
	}
printf("%d",count);
	
}
