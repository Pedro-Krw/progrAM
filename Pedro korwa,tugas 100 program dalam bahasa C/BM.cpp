#include <stdio.h>
// soal praktikum BM

int main(){
	int tugi[4];
	scanf("%ld",&tugi[1]); // menginput test case
	for(tugi[2]=0;tugi[2]<tugi[1];tugi[2]++){
		scanf ("%ld %ld",&tugi[3],&tugi[4]); // menginput 2 angka yang nantinya dijumlah
		printf ("%ld\n",tugi[3]+tugi[4]);
	}
	return 0;
}
