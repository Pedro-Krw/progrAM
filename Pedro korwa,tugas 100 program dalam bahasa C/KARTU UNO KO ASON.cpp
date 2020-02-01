#include <stdio.h>
// soal praktikum KUKA

int main (){
	long long n;
	scanf ("%lld", &n); // menginput tingkat piramid kartu
	printf ("%lld", n*(2*2+(n-1)*3)/2); // untuk menhitung jumlah kartu yang di butuhkan
}
