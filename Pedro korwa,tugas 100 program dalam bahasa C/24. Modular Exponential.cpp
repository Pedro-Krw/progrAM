#include<stdio.h>
// MODULAR EXPONENTIAL

int main(){
	int angka, hasil=1, pangkat;
	scanf("%d %d", &angka, &pangkat); //input angka dengan pangkatnya
	while(pangkat>0){ //algoritma looping modex
		if(pangkat%2==1){
			hasil=hasil*angka;
		}
		angka=angka*angka;
		pangkat=pangkat/2;
	}
	printf("%d", hasil);
	return 0;
}
