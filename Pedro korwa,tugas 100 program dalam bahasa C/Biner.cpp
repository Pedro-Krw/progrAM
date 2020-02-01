#include <stdio.h>
//mengubah angka menjadi biner

int main (){
	int a,b;
	printf ("Masukan angka yang anda ingi ubah ke biner : ");
	scanf("%d", &a); // menginput angka yang akan diubah
	printf ("Biner dari %d adalah : ", a);
	while (a>0){
		if (a%2==1){ // jika input dimodulo 2 hasilnya 1 maka di print 1
			printf ("1");
		}
		if (a%2==0){ // jika input dimodulo 2 hasilnya 0 maka print 0
			printf ("0");
		}
		a=a/2; // setelah semua itu input yang dimasukan dibagi 2
		}
	return 0;
}
