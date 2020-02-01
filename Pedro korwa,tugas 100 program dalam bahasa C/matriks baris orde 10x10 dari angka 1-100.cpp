#include <stdio.h>
#include <stdlib.h>
// matriks baris orde 10x10 dari angka 1-100

int main (){
	int matriks[10][10]; // untuk menentukan jumlah baris dan kolom
	int n,m;
	for (n=0;n<100;n++) // untuk menetukan anga 1-100
		matriks[n/10][n%10] = n+1;
	for (n=0;n<10;n++){
		printf("\n");
		for (m=0;m<10;m++)
			printf("%4d\t", matriks[n][m]);
			printf("\n");
	}
}

