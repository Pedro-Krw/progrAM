#include <iostream>
//pemfaktoran
using namespace std;

int main(){
    int a, b;
    cout << "Masukan angka yang ingin difaktorkan: ";
    cin >> a;// input angka yang ingin difaktorkan
    cout << "Faktor dari " << a << " adalah: " << endl;  
    for(b = 1; b <= a; ++b){// b adalah angka yang ankan terus bertambah sampai sama dengan a atau lebih dari a
        if(a % b == 0){ // jika input modulo b hasilnya 0 maka print b
            cout << b << " ";
		}
    }
    return 0;
}
