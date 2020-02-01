#include<iostream>
// jumlah suku ke n
using namespace std;

int main (){
	double aw,bd,n,h;
	cout<<"masukan suku awal = ";
	cin>>aw; // menginput suku awal
	cout<<"masukan beda antar suku = ";
	cin>>bd; // menginput beda antar suku
	cout<<"jumlah suku yang di cari = S";
	cin>>n; // menginput jumlah suku yang di cari
	h = (n/2)*(2*aw+(n-1)*bd); // sebagai hasi dari rumus Sn = n/2 x (2 x suku awal + (n-1) x beda)
	cout<<"S"<<n<<" = "<<h; 
}
