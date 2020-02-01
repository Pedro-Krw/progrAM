#include <iostream>
//angka armstong dari 1-1000
//contoh angka armstrong 153=1*1*1+5*5*5+3*3*3
using namespace std;

int main(){
	int angka, num, p, sum = 0;
	cout << "Masukan Angka : ";
	cin >> angka;// meginput angka yang akan anda inginkan
	num = angka;// num adalah angka yang anda input
	while(num != 0){//jika input tidak sama dengan nol maka fungsi while akan berjalan
    	p = num % 10; // untuk memodulo angka yang diinput (seandainya 153%10 = 3)
		sum += p * p * p; // sum sebagai penambahan p yang telah dimodulo (sum = 0 + 3 + 3 + 3)
		num /= 10;// setelah semua itu angka yang diinput tadi dibagi sepulah ( 153/10 = 15)
	}
	if(sum == angka){
		cout << angka << " adalah angka armstrong";
	}
  	else{
		cout << angka << " bukan angka armstrong";
	}
	return 0;
}
