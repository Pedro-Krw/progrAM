#include<stdio.h>
// soal Vjudge lucky division

int main(){
	int x;
	scanf("%d", &x); // menginput angka
	// mengecek apakah angka tersebut dapat dibagi 4 dan 7 atau juga angka tersebut memiliki angka 7 dan 4
	if( ((x%10)/4==1 && (x/10)%7==0) || ((x%10)/7==1 && (x/10)%4==0) || (x%4)==0 || (x%7)==0 || (x%47)==0 || (x%74)==0 || x%447==0 || x%474==0 || x%477==0 || x%744==0 || x%747==0 || x%774==0){
		printf("YES");
	}
	else printf("NO");
}
