/*WAP to Swap two variables (Without using third variable).*/
#include<stdio.h>
int main(){
	int a=7;
	int b=6;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d:b=%d",a,b);
}
	
