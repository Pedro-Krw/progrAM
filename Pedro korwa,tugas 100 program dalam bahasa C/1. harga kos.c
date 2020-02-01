#include<stdio.h>

int main() {
	int harga, luas;
	printf("Masukkan harga dan luas kosmu -> ");
	scanf("%d %d", &harga, &luas);
	
	if(harga>1000000 && harga<2000000) {
		printf("Kos Mahal");
		if(luas>25 && luas<36) printf(", luas juga sih\n");
		else if(luas>15) printf(", mayan luas\n");
		else if(luas>0) printf(", sempit\n");
	}
	else if(harga>0) {
		printf("Kos Murah");
		if(luas>25 && luas<36) printf(", Luas lagi\n");
		else if(luas>15) printf(", Luas cocok dgn harganya\n");
		else if(luas>0) printf(" pantas sempit\n");
	}
	else printf("???\n");
	
	return 0;
	
}
