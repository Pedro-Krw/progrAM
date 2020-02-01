#include<stdio.h>
// soal TOKI positif negatif

int main()
{
	int N;
	scanf("%d", &N); // menginput angka
	if(N > 0){ // jika angka lebih besar nol berarti (+)
		printf("positif\n");
	}
	else if(N == 0){ // jika angka sama dengan nol berarti (0)
		printf("nol\n");
	}
	else{ // jika angka lebih kecil dari nol berarti (-)
		printf("negatif\n");
	}
	return 0;
}
