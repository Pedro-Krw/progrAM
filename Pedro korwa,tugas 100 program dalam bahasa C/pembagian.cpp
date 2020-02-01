#include <iostream>
//pembagian
using namespace std;

int main(){
    float n, range;
    cout << " Masukan angka : ";
    cin >> n; // menginput angka
    cout << " Masukan jarak pembagian : ";
    cin >> range; // menginput jarak
    
    // untuk menjalankan sistem pembagian
    for (int i = 1; i <= range; ++i) {
        cout << n << " / " << i << " = " << n / i << endl;
    }
    return 0;
}
