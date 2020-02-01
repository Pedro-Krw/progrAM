#include<stdio.h>
// soal Vjudge twins

int main(){
	int n;
	scanf("%d", &n); // menginput test case
	int ncoins=n;
	int coins[n];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d", &coins[i]);// input angka koin
	}
	// untuk mencari berapa koin minimal yang harus kita ambil
	// supaya nilanya lebih anyak dari pada sepupu kita
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(coins[j]<coins[j+1]){
				int temp=coins[j];
				coins[j]=coins[j+1];
				coins[j+1]=temp;
			}
		}
	}
	int sumKiri=0,count=1, sumKanan=0;
	for(i=0;i<n;i++){
		sumKiri+=coins[i];
		for(j=count;j<n;j++){
			sumKanan+=coins[j];
		}
		if(sumKiri>sumKanan) break;
		else count++;
		sumKanan=0;
	}
	printf("%d ", count);	
}
