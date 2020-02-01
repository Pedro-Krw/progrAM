#include <iostream>
//huruf vokal (a,e,i,o,u)
using namespace std;

int main(){
    char c;
    int hk, hb;
    cout << "Masukan huruf: ";
    cin >> c; // menginput huruf
    hk = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); // mengecek huruf kecil a,e,i,o,u
    hb = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'); // mengecek huruf kapital A,E,I,O,U
    if (hk || hb){ // jika inputan sesuai dengan nilai hk atau hb maka input adalah huruf vokal
        cout << c << " adalah huruf vokal";
	}
    else{
        cout << c << " bukan huruf vokal";
	}
    return 0;
}
