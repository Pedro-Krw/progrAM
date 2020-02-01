#include <iostream>
// soal TOKI faktor ganjil genap
using namespace std;

int fak(int n){
	// jika bialangan tersebut genap maka akan dikembalikan
	// nilai n dengan persamaan dibawah
	if(n%2==0){ 
		if(n>1){ 
			return n*fak(n-1)/2;
		}
	// jika bilangan tersebut ganjil 
		if(n%2!=0){
			return n*fak(n-1);
		}
	}
}
int main (){
	int n;
	cin>>n;
	cout<<fak(n)<<endl;
}
