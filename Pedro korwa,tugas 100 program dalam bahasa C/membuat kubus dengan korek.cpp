#include<iostream>
//membuat kubus dengan korek
using namespace std;

int main (){
	int a,k;
	cin >>a; //  menginput jumlah kubus
	// untuk mentukan jumlah korek yang dibutuhkan
	if (a==1){
		cout <<12;
	}
	if (a==2){
		k=12+8;
		cout<<k;
	}
	if (a>2){
		a-=1;
		k=a*8+12;
		cout <<k;
	}
}
