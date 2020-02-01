#include <stdio.h>
// soal SPOJ CPTTRN 3

int main () {
	int JML,a,x,y,B,K;
	scanf("%d",&JML); // untuk menginput test case
	for(a=0;a<JML;JML++){
		scanf("%d %d",&x,&y); // untuk menginput baris dan kolom
		for(B=0;B<3*x+1;B++){
			for(K=0;K<3*y+1;K++){
				// untuk menentukan penempatan karakter (*) pada baris dan kolom
				if ((B%3==0)|(K%3==0)){
					printf("*");
				} 
				// untuk menentukan penempatan karakter (.)
				else printf(".");
			}printf("\n");
		}printf("\n");
	}
	return 0;
}
