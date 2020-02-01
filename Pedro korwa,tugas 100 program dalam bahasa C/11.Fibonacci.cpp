#include <iostream>
//fibonaci
using namespace std;

int fibonacci(int n){
	if (n==0) return 0; //jika n = 0 maka nilai yang dikembalikan adalah 0
	else if (n==1) return 1; // jika n = 1 maka nilai yang dekembalikan adalah 1
	//jika kedua syarat diatas tidak dipenuh
	//maka akan direkursif dengan persamaan di bawah
	else return(fibonacci(n-1)+fibonacci(n-2));
}     

int main (){
	int n,y;
	cout << "Masukan batas angka fibonaci yang anda inginkan : ";
	cin >> n; //input nilai n
	cout << "Fibonaci 1 sampai " << n << " adalah : ";
	for(y=1;y<=n;y++){
		cout << fibonacci(y) << (" ");
	}
}
