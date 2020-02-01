#include <iostream>
#include <string.h>
// soal praktikum MWBW2
using namespace std;

int FPB(int a,int b);
int skkra(int x,char y[]);

int main(){
	int a,b,c,e,i;
	char d[1001];
	cin >> a; // menginput test case
	for (int b=0;b<a;b++){
		cin >> c >> d; // menginput 2 angka
		i=skkra(c,d);
		cout << FPB(c,i) <<"\n" ;
	}
}

// untuk mencari FPB dari kedua angka inputan tersebut
int FPB(int a,int b){
	if( b==0){
	return a;
	}
	if( b==0){
	return a;
	}
	else{
	return FPB(b, a%b);
	}
}

int skkra(int x,char y[]){
	int z=0;
	int i;
	for (i=0; i<strlen(y);i++){
		z = (((z*10)+(int)y[i] - '0')%x);
	}
	return z;
}
