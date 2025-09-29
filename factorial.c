#include <stdio.h>

 void main(){ 
    int num, fact=1;
    
	 printf("Enter a number: "); 
	 scanf("%d", &num);
	  while(num>0){ 
	  fact = fact * num; num--; 
	  } 
	  printf("factorial is %d", fact); 
	  
}



