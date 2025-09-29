#include <stdio.h>

void main(){
	int num, rem, rev=0;
	printf("Enter a number:");
	scanf("%d", &num);
	int i;
	
	for(i = 0; num >= 1; i++){
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	
	printf("Revesred Number: %d", rev);
}



