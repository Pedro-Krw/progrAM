#include <stdio.h>
//Bilangan Prima
int main (){
	int P,a,b;
	printf("Masukan Angka = ");
	scanf("%d", &P); // menginput nilai angka
	b=0;
	// untuk menetukan apakah angka tersebut prima atau tidak
	for(a=1;a<=P;a++){
	if(P%a==0){	
	b++;
	}
	}
	if(b==2){
	printf("PRIMA");
	}else printf("Bukan Prima");
	return 0;
}
