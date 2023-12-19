/*
 ============================================================================
 Name        : Array1Sample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,size;
	setbuf(stdout,NULL);
	printf("Enter the size");
	scanf("%d",size);
	for(i=1;i<=size;i++){
		for(j=1;j<=i;j++){
			for(k=1;k<=2;k++){
				printf("X");
			}printf("\n");
		}for(j=1;j<=i*3;j++){
			if(j<=i)printf("_");
			else printf("X");
		}printf("\n");
	}

	return 0;
}


//	for(i=0;i<5;i++){
//		for(j=i+1;j<=i+1;j++){
//			printf("%d*%d*",j,i);
//		}printf("\n");
//	}


//	for(i=1;i<=4;i++){
//		for(j=1;j<=7;j++){
//			if(j<=4 && j>=4)printf("*");
//		}printf("1");
//	}
