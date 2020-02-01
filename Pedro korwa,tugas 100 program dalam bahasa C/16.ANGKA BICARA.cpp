#include <stdio.h>
// mengkonversi angka ke huruf

int main (){
	int a;
	scanf("%d", &a); // menginput angka yang akan diubah
	
	// untuk mengatur angka ratusan
	if (a/100==1) printf("seratus");
	else if (a/100==2) printf("dua ratus");
	else if (a/100==3) printf("tiga ratus");
	else if (a/100==4) printf("empat ratus");
	else if (a/100==5) printf("lima ratus");
	else if (a/100==6) printf("enam ratus");
	else if (a/100==7) printf("tujuh ratus");
	else if (a/100==8) printf("delapan ratus");
	else if (a/100==9) printf("sembilan ratus");
	if (a%100!=0&&a/100!=0) printf(" ");
	
	// untuk mengatur angka puluhan
	if (a%100/10==2) printf("dua puluh");
	else if (a%100/10==3) printf("tiga puluh");
	else if (a%100/10==4) printf("empat puluh");
	else if (a%100/10==5) printf("lima puluh");
	else if (a%100/10==6) printf("enam puluh");
	else if (a%100/10==7) printf("tujuh puluh");
	else if (a%100/10==8) printf("delapan puluh");
	else if (a%100/10==9) printf("sembilan puluh");
	if (a%10!=0&&a%100>19) printf(" ");
	
	//untuk mengatur angka 10-19
	if (a%100==10) printf("sepuluh");
	else if (a%100==11) printf ("sebelas");
	else if (a%100==12) printf ("dua belas");
	else if (a%100==13) printf ("tiga belas");
	else if (a%100==14) printf ("empat belas");
	else if (a%100==15) printf ("lima belas");
	else if (a%100==16) printf ("enam belas");
	else if (a%100==17) printf ("tujuh belas");
	else if (a%100==18) printf ("delapan belas");
	else if (a%100==19) printf ("sembilan belas");
	
	//untuk mengatur angka 1-9
	if (a%100/10!=1){
	if (a%100%10==1) printf ("satu");
	else if (a%100%10==2) printf ("dua");
	else if (a%100%10==3) printf ("tiga");
	else if (a%100%10==4) printf ("empat");
	else if (a%100%10==5) printf ("lima");
	else if (a%100%10==6) printf ("enam");
	else if (a%100%10==7) printf ("tujuh");
	else if (a%100%10==8) printf ("delapan");
	else if (a%100%10==9) printf ("sembilan");
	}
}
