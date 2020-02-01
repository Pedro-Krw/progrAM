#include <stdio.h>
// menyusun angka

int main(){
	int i,j,size;
	int arr[100001];
	scanf("%d", &size); // input test case
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]); // masukan angka yang akan disusun
	
	// untuk menukar menyusun banyak inputan yang diinput
	for(i=1;i<size;i++){
		int tmp = arr[i];
		j = i - 1;
		while(arr[j]>tmp && j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = tmp;
	}
	for(i=0;i<size;i++)
	printf("%d ",arr[i]);
}
