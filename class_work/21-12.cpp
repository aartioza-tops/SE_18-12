#include<stdio.h>
int main(){
	
	int a=0,b;
	
	b=a++;
	printf("\n %d",b);  // 0
	printf("\n %d",a);  // 1
	
	b = ++a;
	
	printf("\n %d",a); // 2
	printf("\n %d",b); // 2


	
	
	return 0;
}
