#include <stdio.h>
int main () {
	int r,c;
	printf("Enter number of rows:");
	scanf(" %d", &r);
	printf("\nEnter number of columns:");
	scanf(" %d", &c);
	printf("Enter the elements of your matrix:\n");
	int a[r][c];
	for (int i=0; i<r; i++) {
		for (int j=0; j<c; j++) {
			scanf(" %d", &a[i][j]);
		}
	}
	printf("\n Your matrix:\n");
	for (int i=0; i<r; i++) {
		for (int j=0; j<c; j++) {
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}
	int zero=0, nonzero=0;
	for (int i=0; i<r; i++) {
		for (int j=0; j<c; j++) {
			if (a[i][j]==0) {
				zero++;
			}
			else {
				nonzero++;
			}
		}
	}
	if (zero> (r*c)/2) {
		printf("\n This is a Sparse Matrix!");
	}
	else {
		printf("Not a Sparse Matrix!");
	}
	return 0;
}

