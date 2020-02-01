#include <iostream>
//pengurangan
using namespace std;

int main(){
    int n, range;
    cout << " Masukan angka : ";
    cin >> n; // menginput angka
    cout << " Masukan jarak pengurangan : ";
    cin >> range; // menginput jarak
    
    // untuk menjalankan sistem pengurangan
    for (int i = 1; i <= range; ++i) {
        cout << n << " - " << i << " = " << n -
		i << endl;
    }
    return 0;
}
