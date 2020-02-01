#include<stdio.h>
// soal Vjudge Magnet

int main(){
	int n, arr[100000];
	int count=1;
	int i;
	scanf("%d", &n); // menginput jumlah array
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]); // menginput 0 dan 1
	}
	// untuk menantukan jumlah magnet
	for(i=1;i<=n;i++){
		if(arr[i]+arr[i-1]==11){
			count++;
		}
	}
	printf("%d", count);
}
