#include<stdio.h>
// soal PANDAOJ

int main(){
	int T,cast,i;
	long long x,y;
	scanf("%d",&T); // menginput test case
	for(cast=1;cast<=T;cast++){
		long long sup=0;
		scanf("%lld %lld", &x, &y); // menginput jumlah dadu dan jumlah sisi setiap dadu
		// menghitung jumlah seluruh kombinasi dadu
		for(i=(x*1);i<=(x*y);i++){
			sup+=i;
		}
		printf("Kasus %d: %lld\n",cast,sup);
	}
	return 0;
}
