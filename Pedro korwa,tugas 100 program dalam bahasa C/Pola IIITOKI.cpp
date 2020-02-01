#include<iostream>
//soal TOKI pola III
using namespace std;

int main(){
	int N, x = 0;
	cin >> N; // menginput angka
	char arr[10] = {'0', '1', '2', '3', '4', '5','6', '7', '8', '9'};
	// untuk menghitung deret angka yang berasal dari N
	for(int i = 0; i < N; i++){
		for(int j = 0; j <= i; j++){
			if(x == 10){
				x = 0;
			}
			cout << arr[x];
			x++;
		}
		cout << endl;
	}
	return 0;
}
