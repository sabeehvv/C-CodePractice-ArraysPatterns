/*
 ============================================================================
 Name        : Abhilash.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array1[10],j,i,limit,dupli=0;
		printf("size of the array");
		fflush(stdout);
		scanf("%d",&limit);

		for(i=0;i<=limit;i++)
		{
				scanf("%d",&array1[i]);
		}
		for(i=0;i<limit;i++)
		{
			for(j=i+1;j<limit;j++)
			{
				if(array1[i]==array1[j])
				{
					dupli++;
					break;

				}
			}
		}
		printf("no of duplicates in the array=%d",dupli);
	return EXIT_SUCCESS;
}
