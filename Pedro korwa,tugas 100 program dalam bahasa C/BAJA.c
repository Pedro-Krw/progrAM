#include <stdio.h>
//soal praktikum BAJA

int main(){
	int i, x, a, b;
	scanf("%d", &i); // meninput test case
	for(b=1;b<=i;b++){
		scanf("%d", &x); // meningput angka yang ganjil/genap
		if(x%2 !=0)	// jika ganjil maka angka tetap
		printf("%d\n", x);
		else{ // angka selain ganjil akan dibagi 2
			a = x / 2;
			printf("%d\n", a);
		}
	}
return 0;
}

