#include <stdio.h>
//soal praktikum BCTRY

// fungsi ini berguna untuk menghitung jumlah bakteri
// tiap jumlah hari yang diinput
unsigned long long jumlah(unsigned long long y){
	if(y==0) return 1;
	if(y%2!=0){
		return jumlah(y/2)%1000000007*jumlah(y/2)%1000000007*5;
	}
	if(y%2==0){
		return jumlah(y/2)%1000000007*jumlah(y/2)%1000000007;
	}
}

int main(){ 
	unsigned long long hari,a,b;
	scanf("%llu",&b); // input test case
	for (a=1;a<=b;a++){
		scanf("%llu",&hari); // input hari
		printf("Kasus %llu: %llu\n",a,4*jumlah(hari-1)%1000000007);
	}
}
