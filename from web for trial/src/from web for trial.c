/*
 ============================================================================
 Name        : from.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	    char string1[20];
	    int i, length;
	    int flag = 0;

	    printf("Enter a string:");
	    scanf("%s", string1);

	    length = strlen(string1);

	    for(i=0;i < length ;i++){
	        if(string1[i] != string1[length-i-1]){
	            flag = 1;
	            break;
	           }
	        }

	    if (flag) {
	        printf("%s is not a palindrome", string1);
	    }
	    else {
	        printf("%s is a palindrome", string1);
	    }
	return EXIT_SUCCESS;
}
