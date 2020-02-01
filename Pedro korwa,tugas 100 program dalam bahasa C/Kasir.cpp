 #include<iostream>
// Kasir sederhana
using namespace std;

int main(){
	int x,rc=10000,rk=20000,jumlah1,jumlah2,total,bayar,tunai,sisa;
	string RotiCoklat,RotiKaramel,barang3;

    cout<<"SELAMAT DATANG DI SARI ROTI"<<endl;
    cout<<"TERSEDIA :"<<"Roti Coklat dan Roti Karamel"<<endl;
	cout<<"Masukkan Nama Produk 1  : "; cin>>RotiCoklat; // menginput roti yang diinginkan
	cout<<"Jumlah Produk   : ";
	cin>>x; // menginput jumlah roti
	jumlah1=x*rc;
	cout<<"Total Harga   : Rp. "<<jumlah1<<endl;cout<<endl; 
	cout<<"Masukkan Nama Produk 2  : "; cin>>RotiKaramel; // menginput roti yang diinginkan
	cout<<"Jumlah Produk   : ";
	cin>>x; // menginput jumlah roti
	jumlah2=x*rk;
	cout<<"Total Harga   : Rp. "<<jumlah2<<endl;cout<<endl; 

	bayar=jumlah1+jumlah2;
	cout<<endl; 
	cout<<"============================================"<<endl;
	cout<<"Sub Total   : Rp. "<<bayar<<endl;
	cout<<"============================================"<<endl;
	cout<<"Uang tunai   : Rp. ";
	cin>>tunai; // menginput nilai uang yang dikasih pelanggan
	sisa=tunai-bayar;
	cout<<"Kembalian   : Rp. "<<sisa<<endl;
	cout<<endl; 
}
