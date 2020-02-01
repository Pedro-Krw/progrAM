#include <iostream>
//faktorial
using namespace std;

long long fak(long long n){
	long long fakto=1;
	if (n>1){
		return n*fak(n-1);
		//untuk merekrusif nilai n agar dapat menghasilkan
		//faktorial dari niali n, dengan syarat n lebih besar 1
	}
}
int main (){
	long long n;
	cout << "Masukan angka yang akan difaktorial = ";
	cin >> n;// input angka yang akan difaktorialkan
	cout << "Faktorial " << n << " = " << fak(n);
}
