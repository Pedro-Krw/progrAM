#include <stdio.h>
// soal SPOJ Life,universe, and everything 

int main (){
	int a,b;
	for (b=0;b<1000;b++){
		scanf ("%d", &a); // menginput angka
		if (a==42){ // jika angka sama dengan 42 maka break atau program berhenti
			break;
		}
		printf ("%d\n", a);
	}
	return 0;
}
