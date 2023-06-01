#include <stdio.h>
#include <conio.h>
#include <math.h>

int binarytodecimal (long binarynum){
	int decimalnum=0, temp=0, remainder;
	
	while(binarynum!=0){
		remainder= binarynum%10;
		binarynum=binarynum/10;
		decimalnum=decimalnum+remainder*pow(2,temp);
		temp++;
	}
	return decimalnum;
}

int main(){
	long binarynum, decimalnum;
	
	printf("Enter abinary number: ");
	scanf("%d",&binarynum);
	printf("Equivalent decimal number is: %d");
	binarytodecimal(binarynum);
	return 0;
}

