#include<stdio.h>
// soal TOKI statistika sederhana

int main(){
	int N;
	scanf("%d", &N); // menginput test case
	int i, array[N + 1];
	for(i = 0; i < N; i++){
		scanf("%d", &array[i]); // menginput deret angka
	}
	int max = array[0], min = array[0];
	// untuk menentukan angka paling besar dan angka paling kecil dari
	// deret angka tersebut
	for(i = 1; i < N; i++){
		if(array[i] > max){
			max = array[i];
		}
		else if(array[i] < min){
			min = array[i];
		}
	}
	printf("%d %d\n", max, min);
	return 0;
}

