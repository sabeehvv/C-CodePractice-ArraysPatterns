/*
 ============================================================================
 Name        : paternsample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,size;
	setbuf(stdout,NULL);
	printf("Enter the size");
	scanf("%d",&size);
	for(i=1;i<=size;i++){
		for(j=1;j<=size;j++){
			if(i>=j) printf("%d",j);
			else printf(" ");
		}for(j=size;j>=1;j--){
			if(j<=i) printf("%d",j);
			else printf(" ");
		}printf("\n");
	}

	return EXIT_SUCCESS;
}
