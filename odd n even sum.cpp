#include <stdio.h>
int main() {
	int a=0;
	int n=20;
	int b=0;
	int i;
	for (i=2; i<=2*n; i+=2) {
		a = a+i;
	}
	printf("The sum of first 20 Even Numbers is %d\n" ,a);
	for (i=1; i<=2*n; i+=2) {
		b = b+i;
	}
	printf("The sum of first 20 Odd Numbers is %d" ,b);
	return 0;
}
