#include<stdio.h>
//bubble sort

int main(){
	int n;
	scanf("%d", &n); //input jumlah angka
	int ray[n]; //penyediaan array yang akan diisi
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d", &ray[i]); //input data
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(ray[j]>ray[j+1]){
				int temp=ray[j];	//looping untuk menukar isi array
				ray[j]=ray[j+1];
				ray[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d", ray[i]); //input data
		if(i<n-1) printf(" ");
	}
}
