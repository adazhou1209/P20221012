#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num = 0;
	int nnum = 5;
	

	while (num < 5 ) {
		int i = 0;
	    while(i <= num ) {
	    	printf("*");
	    	i = i + 1;
		}
	    printf("\n");
		num = num + 1; 
	}
	while (nnum >= 0) {
		int i = 0;
	    while(i <= nnum ) {
	    	printf("*");
	    	i = i + 1;
		}
	    printf("\n");
		nnum = nnum - 1; 
	}
	

  
}
