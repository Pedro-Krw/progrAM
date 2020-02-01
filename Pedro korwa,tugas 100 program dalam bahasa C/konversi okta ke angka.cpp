#include <iostream>
#include <cmath>
//konversi angka ke oktal
using namespace std;

int dko(int ad);

int main(){
	int ad;
	cout << "Masukan angka desimal : ";
	cin >> ad; // menginput angka desimal
	cout << ad << " dalam oktal adalah = " << dko(ad);
	return 0;
}

int dko(int ad){
	int j, i = 1, ok = 0;
    while (ad != 0){ // saat ad tidak sama dengan nol maka fungsi while akan berjalan
    	j = ad % 8; // nilai j adala ad dimodulo 8 (seandainya (ad = 10) (j = 10%8 = 2)
        ad /= 8; // nilai ad adalah (ad = 10/8 = 2)
        ok += j * i; // nilai ok adlaj (ok = 0 + 2 * 1)
        i *= 10;// nilai i adalah ( i = 1*10 = 10)
    }
    return ok;
}
