#include<stdio.h>
// fib rekursif

int fibonacci(int n){
	if(n>1){
		n=n+(fibonacci(n-1)); //menjumlahkan angka dengan sebelumnya
	}
	return n;
}

int main(){
	int angka;
	scanf("%d", &angka); //input deret fibonacci keberapa
	printf("Deret fibonacci pada n=%d adalah %d",angka, fibonacci(angka));
}
