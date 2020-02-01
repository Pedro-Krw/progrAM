#include<iostream>
// operasi sederhana
using namespace std;

int main (){
	int a,b,c,d;
	char e;
	cin>>a; // menginput test case
	for (b=0;b<a;b++){
		cin>>c>>e>>d; // menginput angka,karakter,dan angka
		cout<<endl;
		// mencari apakah kedua angka tersebut ditambah,dikuran,dikali, atau dibagi
		if (e=='+'){
			cout<<c<<endl<<d<<endl<<"------ +"<<endl<<c+d<<endl;
		cout<<endl;
		}
		else if (e=='-'){
			cout<<c<<endl<<d<<endl<<"------ -"<<endl<<c-d<<endl;
		cout<<endl;
		}
		else if (e=='x'){
			cout<<c<<endl<<d<<endl<<"------ x"<<endl<<c*d<<endl;
		cout<<endl;
		}
		else if (e==':'){
			cout<<c<<endl<<d<<endl<<"------ :"<<endl<<c/d<<endl;
		cout<<endl;
		}
	}
}
