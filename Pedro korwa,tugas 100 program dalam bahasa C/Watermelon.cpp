#include <iostream>
// Soal Vjudge Watermelon
using namespace std;

int main (){
	int a;
	cin>>a; // masukan berapa berat semangka
	// menetukan jika semangkanya dibagi maka beratnya genap
	if (a==2){
		cout<<"NO";
	}
	else if (a%2==0){
		cout<<"YES";
	}
	else if (a%2!=0){
		cout<<"NO";
	}
}
