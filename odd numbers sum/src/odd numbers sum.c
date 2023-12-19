/*
 ============================================================================
 Name        : odd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,sum=0,limit;
	setbuf(stdout,NULL);
	printf("enter a Limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){if(i%2!=0)
		sum=sum+i;
	}
		printf("sum of odd numbers = %d\n",sum);

	return EXIT_SUCCESS;
}
