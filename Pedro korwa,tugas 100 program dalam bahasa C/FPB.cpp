#include <iostream>
// FPB
using namespace std;

int main(){
	int m, n, r;
	cout << "Masukan Bilangan 1 : ";
	cin >> m; // menginput angka satu
	cout << "Masukan Bilangan 2 : ";
	cin >> n; // menginput angka dua
	r = m % n; // r adalah nilai dari m dimodulo n
    while(r != 0){ // saat r tidak sama dengan nol fungsi while akan berjalan
		m = n; // nilai m diubah menjadi n
		n = r; // nilai n diubah menjadi r
		r = m % n; // lalu m dan n dimodulo lagi sebagai nilai r
	}
	cout<< "FPB bilangan 1 dan 2 adalah: " << n << endl;
	return 0;
}
