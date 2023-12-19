/*
 ============================================================================
 Name        : PaternLadder.c
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
		scanf("%d",&size);
		for(i=1;i<=size;i++){
			for(j=1;j<=2;j++){
				for(k=size+3-i-j;k>=1;k--){
					printf("*");
				}printf("\n");
			}
			for(j=1;j<=3;j++){
				printf("*\n");
			}
		}






	return EXIT_SUCCESS;
}



//1 Assignment
	//{for(i=1;i<=size;i++){
		//for(j=1;j<=2*i;j++){
			//printf("*");
		//}printf("\n");
		//if(i==size)break;
		//for(j=1;j<=i*2;j++){
			//printf("*\n");
		//}}


//Assignment 2
	//for(i=1;i<=size;i++){
		//for(j=1;j<=3*i;j++){
			//printf("*");
		//}printf("\n");
		//for(j=1;j<=i;j++){
			//printf("*\n");}}

// Assignment 3
//	for(i=1;i<=size;i++){
//	for(k=1;k<=i;k++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(k=1;k<=i*3;k++){
//		printf("*");
//	}


//Assingment 4
//	for(i=1;i<=size;i++){
//		for(j=1;j<=i;j++){
//			printf("*\n");
//		}for(j=1;j<=i*4;j++){
//			printf("*");
//		}printf("\n");
//	}


//	Assingment 6
//	for(i=size;i>=1;i--){
//		for(j=1;j<=i*2;j++){
//			printf("*");
//		}printf("\n");
//		for(j=size;j>=i;j--){
//			printf("*\n");
//		}//printf("\n");
	//}

//	Assingmenet 7
//	for(i=1;i<=size;i++){
//		for(j=01;j<=i*5;j++){
//			printf("*");
//		}printf("\n");
//		if(i>=size)break;
//		for(j=1;j<=i*3;j++){
//			printf("*\n");
//		}
//	}


//	Assingment 9
//	for(i=0;i<=size;i++){row=row+row;
//		for(j=1;j<=row;j++){
//			printf("*");
//		}printf("\n");
//		for(j=1;j<=column;j++){
//			printf("*\n");
//		}column=column+2;
//	}

//	Assingment = 10
//	for(i=1;i<=size;i++){
//		for(j=1;j<=i*5;j++){
//			printf("*");
//		}printf("\n");
//		for(j=1;j<=i*2;j++){
//			printf("*\n");
//		}
//	}


//	printf("Enter the size of pattern");
//	scanf("%d",&size);
//	for(i=1;i<=size;i++){
//		if(i%2==0)column=3;
//		else column=1;
//		for(j=1;j<=column;j++){
//			printf("*\n");
//		}for(j=1;j<=i*2;j++){
//			printf("*");
//		}printf("\n");
//	}


//		for(i=1;i<=size;i++){
//			for(j=1;j<=i;j++){
//				for(k=1;k<=2;k++){
//					printf("X");
//				}printf("\n");
//			}for(j=1;j<=i*3;j++){
//				if(j<=i)printf("_");
//				else printf("X");
//			}printf("\n");
//		}
