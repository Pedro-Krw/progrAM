#include <stdio.h>
// soal praktikum MR

int main (){
	long long a,n,b,c;
	scanf("%lld", &a); // menginput test case
	for (b=0;b<a;b++){
	scanf ("%lld", &c); // menginput angka
	n=0;
	// untuk mencari 2 pangkat berapa untuk mendapatkan
	// input tersebut
	while (c>0){
		if (c%2==1){
			printf ("2^%lld",n);
			if(c!=1)printf(" + "); // atau (a/2>0)
		}
		n++;
		c=c/2;
	}
	printf("\n");
	}
}
