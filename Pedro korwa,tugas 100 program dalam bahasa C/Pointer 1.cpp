#include <iostream>
// pointer 1
using namespace std;
 
int main(){
	int a;
	int *b; //Mendeklarasikan variabel b sebagai pointer
	b = &a; //Mengkopikan alamat variabel a kedalam variabel pointer b
	cout<<"Nilai variabel a adalah ";
	cin>>a; //Menginput nilai variabel a
	cout<<"Alamat variabel a adalah "<<&a<<endl;
	cout<<"Isi dari variabel b adalah "<<b<<endl;
	cout<<"Nilai yang tertampung dalam variabel b adalah "<<*b<<endl;
	return 0;
}
