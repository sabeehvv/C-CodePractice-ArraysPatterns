/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,temp=1,duplicate=0;
	int value1[100],value2[100],value3[100];
	setbuf(stdout,NULL);
	printf("Enter 3 values");
	for(i=0;i<5;i++){
		scanf("%d",&value1[i]);
	}

	printf("The elements stored in the first array are :");
	for(i=0;i<5;i++){
		printf("%d ",value1[i]);
	}
	for(j=0;j<5;j++){
				value2[j]=value1[j];
				value3[j]=0;
			}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(value2[i]==value2[j]){
				value3[j]=temp;
				temp++;
			}
		}temp=1;
	}

	for(i=0;i<5;i++){
		if(value3[i]==2){
			duplicate++;
		}
	}
	printf("\nTotal number of duplicate elements found in the array is :%d",duplicate);

	printf("\nThe elements copied into the second array are :");
	for(j=0;j<5;j++){
		printf("%d ",value2[j]);
	}


	return EXIT_SUCCESS;
}
