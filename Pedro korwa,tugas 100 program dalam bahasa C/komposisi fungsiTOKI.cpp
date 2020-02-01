#include<iostream>
#include<cmath>
// soal TOKI komposisi fungsi
using namespace std;

int fungsi(int, int, int, int);

int main(){
    int a, b, x, y, z, k;
    cin >> a >> b >> k >> x; // menginput 4 bilangan bulat
    cout << fungsi(x, a, b, k) << endl;
    return 0;
}

// untuk menjalankan fungsi f(f(f(x)))
int fungsi(int x, int a, int b, int k){
    int awal, hasil;
    awal = abs(a * x + b);
    if(k != 1){
        return fungsi(awal, a, b, k - 1);
    }
    else{
        return awal;
    }
}
