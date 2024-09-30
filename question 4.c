#include<stdio.h>

int main(){
	int purchaseamount;
	char membership;
	
	printf("enter purchaseamount:");
	scanf("%d",&purchaseamount);
	printf("enter memebership(Y for yes , N for no):");
	scanf(" %c",&membership);
	
	float discount=(purchaseamount>=100 && membership=='Y')? purchaseamount*0.1f: 0 ;
	printf("Discount: %f\n", discount);
	printf("purchaseamount: %d\n", purchaseamount);
}

