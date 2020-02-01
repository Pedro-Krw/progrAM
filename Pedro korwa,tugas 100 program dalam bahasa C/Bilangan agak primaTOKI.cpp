#include<iostream>
// soal TOKI Bilangan agak prima
using namespace std;

int main(){
	int N, x, a;
	cin >> N; // input test case
	for(int i = 0; i < N; i++){
		a = 0;
		cin >> x; // menginput angka yang akan diperiksa agak prima atau tidak
		
		// untuk menentukan apakah faktor inputan memiliki
		// angka prima yang banyak daripada angka tidak prima
		// dan jika yang diinput memang prima output adalah "YA"
		for(int j = 1; j < x; j++){
			if(x % j == 0){
				a++;
				if(a > 3)
					break;
			}
		}
		if(a > 3){
			cout << "BUKAN";
		}
		else{
			cout << "YA";
		}
		cout << endl;
	}
	return 0;
}
