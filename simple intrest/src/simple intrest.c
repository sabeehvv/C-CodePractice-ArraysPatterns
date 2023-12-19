/*
 ============================================================================
 Name        : simple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int P;
	float R,n,SI;
	//Principal amount = "P"
	//Interest rate = "R"
	//Number of years = "n"
	setbuf(stdout,NULL);
	printf("Calculating Interest\n");
	printf("--------------------\n\n");
	printf("enter principal amount :");
	scanf("%d",&P);
	printf("enter Interest rate :");
	scanf("%f",&R);
	printf("enter Number of Years :");
	scanf("%f",&n);
	SI=(P*R*n)/100;
	printf("\nInterest is:%f",SI);
	return EXIT_SUCCESS;
}
