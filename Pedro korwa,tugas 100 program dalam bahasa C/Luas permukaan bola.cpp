#include<iostream>
// Luas permukaan bola
using namespace std;

int main(){
	int jari;
	long int luas;
	float pi=3.14;
	cout<<("Masukan jari jari : ");
	cin>>jari; // menginpuit jari-jari bola
	luas=4*pi*jari*jari; // menghitung luas bola
	cout<<("Luas permukaan bola adalah = ")<<luas;
	return 0;
}
