#include <iostream>
#include <stdio.h>
// soal Vjudge Eazy Math
using namespace std;

int main (){
	long long a,b,d,f;
	while (scanf ("%lld %lld",&a,&b) != EOF){ // untuk menginput nilai panjang deret a-b yang nantinya di jumlah
		f=0;
		// untuk menentukan penjumlahan yang inputan a<b (a=3 dan b=5, 3+4+5=12)
		if (a<b){
			for (d=a;d<=b;d++){
				f=f+d;
			}
		cout<<f<<endl;
		}
		// untuk menentukan penjumlahan yang inputan a>b (a=5 dan b=3, 5+4+3=12)
		else if (a>b){
			for (d=b;d<=a;d++){
				f=f+d;
			}
		cout<<f<<endl;
		}
		// untuk menentukan hasil jika a dan b sama (a=2 dan b=2, 2) 
		else if (a == b){
			cout<<a<<endl;
		}
	}
	return 0;
}
