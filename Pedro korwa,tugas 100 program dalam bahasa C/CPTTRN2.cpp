#include <stdio.h>
// soal SPOJ CPTTRN 2

int main (){
	int a,b,c,d,e,f;
	scanf("%d", &a); // untuk menginput test case
	for (b=0;b<a;b++){
		scanf("%d %d",&c,&d); // untuk menginput baris dan kolom
		for(e=1;e<=c;e++){
			for(f=1;f<=d;f++){
				// untuk menentukan barik dan kolom paling luar berbentuk (*)
				if((e==1)|(f==1)|(e==c)|(f==d)){
					printf("*");
					}
				else { 
					// untuk menentukann (.) dalam baris dan kolom
					printf(".");
					}
			}printf("\n");
		}
	}
	return 0;
}
