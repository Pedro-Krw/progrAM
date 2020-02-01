#include<stdio.h>

int main(){
	int harga, uang;
	scanf("%d %d", &harga, &uang); //input uang dan harga barang
	if(uang<harga ){ //jika barang lebih mahal dari uang yang kita punya
		printf("Maaf mas/mba, uangnya nda cukup XD\n");
	}
	else{
		uang-=harga;
		printf("kembaliannya adalah \n");
		if(uang>100000){
			printf("Rp.100000 sebanyak %d\n", uang/100000);
			uang%=100000;
		}
		if(uang>50000){
			printf("Rp.50000 sebanyak %d\n", uang/50000);
			uang%=50000;
		}
		if(uang>20000){
			printf("Rp.20000 sebanyak %d\n", uang/20000);
			uang%=20000;
		}
		if(uang>10000){
			printf("Rp.10000 sebanyak %d\n", uang/10000);
			uang%=10000;
		}
		if(uang>5000){
			printf("Rp.5000 sebanyak %d\n", uang/5000);
			uang%=5000;
		}
		if(uang>2000){
			printf("Rp.2000 sebanyak %d\n", uang/2000);
			uang%=2000;
		}
		if(uang>1000){
			printf("Rp.1000 sebanyak %d\n", uang/1000);
			uang%=1000;
		}
		if(uang>500){
			printf("Rp.500 sebanyak %d\n", uang/500);
			uang%=500;
		}
		if(uang>200){
			printf("Rp.200 sebanyak %d\n", uang/200);
			uang%=200;
		}
		if(uang>100){
			printf("Rp.100 sebanyak %d\n", uang/100);
			uang%=100;
		}
		if(uang>0){
			printf("mas/mba, sisa kembalian Rp.%d nya ikhlasin ya heheheee :D\n", uang);
		}
	}
}
