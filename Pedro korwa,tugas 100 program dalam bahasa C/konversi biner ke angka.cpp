#include <iostream>
#include <cmath>
// konversi angka ke biner
using namespace std;

int bkd(long long);

int main(){
    long long n;
    cout << "Masukan Angka Biner: ";
    cin >> n; // menginput angka biner
    cout << n << " Dalam angka desimal adalah = " << bkd(n);
    return 0;
}

int bkd(long long n){
    int ad = 0, a = 0, b;
    while (n!=0){ // jika inputan tidak sama dengan 0 maka funsi while akan berjalan
        b = n%10; // nilai b adalah n dimodulo 10 (seandainya 1111%10 = 1)
        n /= 10; // nilai n dibagi 10 ( 1111/10 = 111)
        ad += b*pow(2,a); // contoh (ad = 0 + 1 * 2^1)
        ++a;
    }
    return ad;
}
