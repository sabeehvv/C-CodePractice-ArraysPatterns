/*
 ============================================================================
 Name        : PatternNumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k=0;
	setbuf(stdout,NULL);
	for(i=1;i<5;i++){
		for(j=1;j<=i;j++){
			k++;
			printf("%d  ",k);
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
