#include <iostream>
// mencari rata-rata
using namespace std;

int main()
{
    int n, i;
    float num[100], sum=0.0, average;
    cout << "Masukan jumlah data : ";
    cin >> n; // menginput test case
    while (n > 100 || n <= 0){
        cout << "Error! jumlah data harus (1 ke 100)." << endl;
        cout << "Masukan jumlah lagi : ";
        cin >> n; // menginput test case lagi
    }
    for(i = 0; i < n; ++i){
        cout << i + 1 << ". Masukan angka : ";
        cin >> num[i]; // Menginput angka
        sum += num[i];
    }
    average = sum / n; // untuk mencari rata-rata
    cout << "Rata-rata = " << average;
    return 0;
}
