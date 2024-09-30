#include <stdio.h>

int main(){
	int age;
	char citizenship;
	
	printf("enter age:");
	scanf("%d",&age);
	printf("enter citizenship(Y for yes, N for no):");
	scanf(" %c" ,&citizenship);
	
	if(age>=18 && citizenship=='y'){
		printf("eligible for vote");
	}else{
		printf("not eligible for vote");
	}
	return 0;
}

