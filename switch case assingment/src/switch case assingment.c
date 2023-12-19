/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int day;
	setbuf(stdout,NULL);
	printf("1 for Sunday\n2 for Monday\n3 for Tuesday\n4 for Wednesday\n5 for Thursday\n6 for Friday\n7 for saturday \n\n Enter your choice\t:");
	scanf("%d",&day);
	switch(day){
	case 1:printf("you have selected Sunday");break;
	case 2:printf("you have selected Monday");break;
	case 3:printf("you have selected Tuesday");break;
	case 4:printf("you have selected Wednesday");break;
	case 5:printf("you have selected Thursday");break;
	case 6:printf("you have selected Friday");break;
	case 7:printf("you have selected Saturday");break;
	default :printf("Invalid Entry");break;
	}
	return EXIT_SUCCESS;
}
