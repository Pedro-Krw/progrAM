#include <iostream>
// transpos matriks
using namespace std;

int main(){
    int a[10][10], trans[10][10], r, c, i, j;
    cout << "Enter rows and columns of matrix: ";
    cin >> r >> c; // menginput caris dan kolom

    // Menyimpan elemen matriks yang dimasukkan oleh pengguna dalam array a [] [].
    cout << endl << "Enter elements of matrix " << endl;
    for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j){
        cout << "Enter elements a" << i + 1 << j + 1 << ": ";
        cin >> a[i][j];
    }

    // Menampilkan matriks a [] []
    cout << endl << "Entered Matrix: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j){
            cout << " " << a[i][j];
            if(j == c - 1)
                cout << endl << endl;
        }

    // Menemukan transpose matriks a [] [] dan menyimpannya dalam array trans [] [].
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j){
            trans[j][i]=a[i][j];
        }

    // Menampilkan transpose, yaitu, Menampilkan array trans [] [].
    cout << endl << "Transpose of Matrix: " << endl;
    for(i = 0; i < c; ++i)
        for(j = 0; j < r; ++j){
            cout << " " << trans[i][j];
            if(j == r - 1)
                cout << endl << endl;
        }

    return 0;
}
