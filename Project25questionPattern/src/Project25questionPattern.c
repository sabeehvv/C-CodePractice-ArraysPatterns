/*
 ============================================================================
 Name        : Project25questionPattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,m,size,k=1,s=0;
	int Array[100];
	setbuf(stdout,NULL);
	printf("Enter the size of array");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		Array[i]=k;
		k++;
	}
	for(i=0;i<size;i++){
		if(Array[i]%2!=0){
			s=s+2;
			for(m=0;m<2;m++)
			for(j=i;j<size-s;j++){
			Array[j+1]=Array[j+2];
		}}
	}
	for(i=0;i<=size-1;i++){
		printf("%d\n",Array[i]);
	}
	return EXIT_SUCCESS;
}


//	printf("Enter the size");
//	scanf("%d",&size);
//	for(i=1;i<=size;i++){
//		for(j=1;j<=2*i;j++){
//			printf("*");
//		}printf("\n");
//		if(i==size)break;
//		for(j=1;j<=3*i;j++){
//			printf("*\n");
//		}
//		}
