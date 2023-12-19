/*
 ============================================================================
 Name        : prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,flag=0;
	setbuf(stdout,NULL);
	printf("enter a number");
	scanf("%d",&n);
	if(n==1||n==0)flag=1;
	for(i=2;i<n;i++){
		if(n%i==0){
		flag=1;
		break;
		}
	}
	if(flag==1){
	printf("Not a prime number");
	}
	else{
	printf("prime number");
	}

	return EXIT_SUCCESS;
}
