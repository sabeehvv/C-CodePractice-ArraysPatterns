/*
 ============================================================================
 Name        : PatternBox.c
 Author      : 

 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,size,k=0,count;
	setbuf(stdout,NULL);
	printf("Enter the size of pattern");
	scanf("%d",&size);
	count=size*2-1;
	for(i=1;i<=count;i++){
		i<=size?k++:k--;
		for(j=1;j<=count;j++){
			if(j==size-k+1||j==size+k-1||j==size||i==size)
				printf("*");
			else printf(" ");
		}printf("\n");
	}


	return EXIT_SUCCESS;
}



//	Assingment 1
//	for(i=1;i<=size;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}printf("\n");
//	}


//	Assingment 2
//	for(i=1;i<=size;i++){
//		for(j=size;j>=1;j--){
//			if(j<=i)printf("*");
//			else printf(" ");
//		}printf("\n");
//	}


//	Assingment 3
//	for(i=0;i<=size;i++){
//		for(j=1;j<=column;j++){
//			if(j>=size+i || j<=size-i)printf("* ");
//			else printf("  ");
//		}printf("\n");
//	}

//	Assingment 4
//	column=(size*2)-1;
//	for(i=1;i<=size;i++){
//		k=1;
//		for(j=1;j<=column;j++){
//			if(j>=size-i+1 && j<=size+i-1){
//				printf("%d",k);
//				j<size?k++:k--;}
//				else printf(" ");
//		}printf("\n");
//	}

//	Assingment 5
//	for(i=0;i<=size;i++){
//		for(j=0;j<=1;j++){
//			for(l=1;l<=size-i-j;l++){printf("X");
//		}printf("\n");}
//		if(i==size-2)break;
//		for(j=1;j<=2;j++){
//			printf("X\n");
//		}
//		}
//	Assinfment 6
//	column=(size*2)-1;
//	for(i=1;i<=size;i++){
//		k='A';
//		for(j=1;j<=column;j++){
//			if(j<=size-i+1 || j>=size+i-1){
//				printf("%c",k);
//				j<size?k++:k--;
//			}else printf(" ");
//		}printf("\n");
//	}

//	Assingment 7
//	count=(size*2)-1;
//	for(i=1;i<=count;i++){
//		i<size?k++:k--;
//		for(j=1;j<=count;j++){
//			if(j<=size+k-1 && j>=size-k+1)printf("*");
//			else printf(" ");
//		}printf("\n\n");
//	}

//	Assingment 8
//	count=(size*2)-1;
//	for(i=1;i<=count;i++){
//		i<size?k++:k--;
//		for(j=1;j<=size;j++){
//			if(j<=k)printf("*");
//			else printf(" ");
//		}printf("\n");
//	}

//	Assingment 9
//	count=(size*2)-1;
//	for(i=size;i>=1;i--){
//		for(j=1;j<=count;j++){
//			if(j<=size+i-1 && j>=size-i+1)printf("*");
//			else printf(" ");
//		}printf("\n");
//	}


//	Assingmet = 10
//	count=(size*2)-1;
//	for(i=1;i<=size;i++){
//		k=i;
//		for(j=1;j<=count;j++){
//			if(j<=size+i-1  &&  j>=size-i+1){
//				printf("%d",k);
//				j<size?k++:k--;
//			}else printf(" ");
//		}printf("\n");
//	}

//	Assingment 11
//	for(i=size;i>=0;i--){
//		k=i;
//		for(j=0;j<=size;j++){
//			if(j<=i){
//				printf("%d",k);
//				k--;
//			}else printf(" ");
//		}printf("\n");
//	}

//	Assingment 12
//	count=(size*2)-1;
//	for(i=1;i<=count;i++){
//		i<size?k++:k--;L=1;
//		for(j=1;j<size;j++){
//			if(j>=size-k){
//				printf("%d ",L);
//				L++;
//			}
//			else printf("  ");
//		}printf("\n");
//	}

//	Assingment 13
//	for(i=1;i<=size;i++){
//		for(j=1;j<=size;j++){
//			if(j<=i){
//				if(i%2==0){printf("%d",L);}
//				else printf("%c",cap);
//			}
//			else printf(" ");
//		}printf("\n");i%2==0?L++:cap++;
//	}



//	Assingment 14
//	scanf("%d",&size);
//	for(i=1;i<=size;i++){
//		for(j=1;j<=size;j++){
//			if(j==i || size+1==i+j){
//				if(j==i){
//				printf("\\");}
//				else printf("/");
//			}else printf("*");
//		}printf("\n");
//	}

//	Assingment 15
//	for(i=1;i<=size;i++){
//		k=1;
//		for(j=1;j<=count;j++){
//			if(j<= size+i-1 && j>=size-i+1&&k){
//				printf("*");
//				k=0;
//			}else {printf(" ");
//			k=1;
//			}
//		}printf("\n");
//	}

//	Assingment 16
//	count=size*2-1;
//	for(i=1;i<=size;i++){
//		k=1;
//		for(j=1;j<=count;j++){
//			if((j==size-i+1||j==size+i-1|| i==size) && k){
//				printf("*");
//			k=0;}
//				else {printf(" ");
//				k=1;
//				}
//		}printf("\n");
//	}


//	Assingment `16
//	count=size*2-1;
//	for(i=1;i<=count;i++){
//		for(j=1;j<=count;j++){
//			if(j<=size-k+1 || j>=size+k-1){
//				printf("*");
//			}
//			else printf(" ");
//		}printf("\n");
//		i<size?k++:k--;
//	}
