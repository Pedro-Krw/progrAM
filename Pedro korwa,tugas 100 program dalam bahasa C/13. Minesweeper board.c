#include<stdio.h>
//membuat map minesweeper

int main(){
	int T, B, K, x, y, a;
	int totalB=0;
	int totalK=0;
	printf("Masukkan Test Case : ");
	scanf("%d", &T); // input test case
	printf("\nMasukkan Baris dan Kolom: ");
	for(a=1 ; a<=T ; a++){
		scanf("%d %d", &B, &K); //input baris dan kolom
		totalB=2*B+1;
		totalK=2*K+1;
		
		for(x=1 ; x<=totalB ; x++){
			for(y=1 ; y<=totalK ; y++){
				// untuk menentukan karakter +
				if((x%2!=0) && (y%2!=0)){
					printf("+");
				}
				// untuk menentukan karakter _
				else if((x%2!=0) && (y%2==0)){
					printf("-");
				}
				// untuk menentukan karakter |
				else if((x%2==0) && (y%2!=0)){
					printf("|");
				}
				// untuk menentukan spasi
				else if((x%2==0) && (y%2==0)){
					printf(" ");
				}
			}
			printf("\n");
		}
		if(a!=T){
			printf("\n");
		}
	}
	return 0;
}
