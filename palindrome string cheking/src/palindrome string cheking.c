/*
 ============================================================================
 Name        : palindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char string[20];
	int length,i;
	int flag=0;
	setbuf(stdout,NULL);
	printf("enter a string");
	scanf("%s",string);
	length=strlen(string);
	for(i=0;i<length;i++){
		if(string[i]!=string[length-i-1]){
			flag=1;
			break;
		}}
	if(flag){
	printf("Entered string is not a palindrome");}
	else{printf("Entered string is a palindrome");}

	return EXIT_SUCCESS;
}
