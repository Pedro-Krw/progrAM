#include <stdio.h>
// soal praktikum JKN

int main(){
	int HH, MM, SS, HH1, MM1, SS1, HH2, MM2, SS2, x, y, z;
	scanf("%d:%d:%d", &HH, &MM, &SS); // menginput waktu yang pertama
	scanf("%d:%d:%d", &HH1, &MM1, &SS1); // menginput waktu kedua
	HH2= (HH + HH1);
	MM2= (MM + MM1);
	SS2= (SS + SS1);
	// untuk mengurangi waktu pertama dgn yang kedua
	x = HH2%24 + ((MM + MM1)/60);
	y = MM2%60 + ((SS + SS1)/60);
	z = SS2%60;
	printf("%02d:%02d:%02d\n", x, y, z);	
return 0;	
}
