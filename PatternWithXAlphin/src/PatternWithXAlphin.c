/*
 ============================================================================
 Name        : PatternWithXAlphin.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,size,M=1;
	setbuf(stdout,NULL);
	printf("Enter the size of pattern");
	scanf("%d",&size);
	for(i=1;i<=size;i++){
		M=M+M;
		for(j=1;j<=i;j++){
			for(k=1;k<=2;k++){
				printf("X");
			}printf("\n");
		}for(j=1;j<=M+i;j++){
			if(j<=i)printf("_");
			else printf("X");
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
