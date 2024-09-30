#include<stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Use bitwise AND operator (&) to check Least Significant Bit (LSB)
    // If LSB is 1, number is odd; if LSB is 0, number is even
    if (num & 1){
        printf("%d is odd\n", num);
    }else{
        printf("%d is even\n", num);
    }
    return 0;
}

