#include<stdio.h>
// soal TOKI Bebek untuk teman

int main(){
	int N, M;
	scanf("%d %d", &N, &M); // input banyak bebek (N) dan banyak teman (M)
	// untuk menetukan berapa bebek yang akan didapat
	// masing-masing temannya 
	int a = N/M;
	// untuk menetukan sisa bebek pak dengklek
	int b = N%M;
	printf("masing-masing %d\n", a);
	printf("bersisa %d\n",b);
	return 0;
}
