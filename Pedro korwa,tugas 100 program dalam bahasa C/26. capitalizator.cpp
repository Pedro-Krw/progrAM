#include<stdio.h>
#include<string.h>

int main(){
	char x[1001];
	scanf("%[^\n]s", &x); //input kata atau kalimat yang berhenti hingga kita memencet enter
	int n=(int)strlen(x); //hitung panjang string
	if(x[0]>='a' && x[0]<='z'){ //jika huruf pertama adalah huruf non kapital, maka dikapitalkan dengan merubah asciinya
		x[0]-=32;
	}
	printf("%s", x);
}
