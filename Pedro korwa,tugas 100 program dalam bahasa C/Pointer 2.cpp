#include<stdio.h>
// pointer 2

int main(){
	int *P;
	int X;
	X=10;
	P=&X;
	// untuk menetukan alamat dan nilai x dan p
	printf("X= %d \n",X);
	printf("&X= %p \n",&X);
	printf("*P= %d \n",X);
	printf("P= %p \n",P);
	*P=20;
	printf("X= %d \n",X);
	printf("&X= %p \n",&X);
	printf("*P= %d \n",X);
	printf("P= %p \n",P);
}
