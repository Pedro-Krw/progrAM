#include <stdio.h>
// soal praktikum KUKA2

int main (){
	int a,b,c,d,e;
	scanf ("%d %d", &a,&b); // meninput banyak deret dan banyak putaran angka
	int array[a];
	for (c=0;c<a;c++){
	scanf ("%d", &array[c]); // menginput deret angka
	}
	// untuk membalik angka tiap putaran
	for (d=b;d<a;d++){
	printf ("%d ",array[d]);
	}
	for (e=0;e<b;e++){
		if (e==b-1) 
			printf ("%d", array[e]);
		else 
			printf ("%d ", array[e]);
	}
	return 0;
}
