#include<iostream>
//Luas Selimut Tabung
using namespace std;

int main(){
	float luas,jarijari,tinggi;
	cout<<"masukan jari-jari: ";
	cin>>jarijari; // menginput jari-jari tabung
	cout<<"masukan tinggi: ";
	cin>>tinggi; // menginput tinggi tabung
	luas=2*3.14*jarijari*tinggi; // untuk menghitung jari" tabung
	cout<<"luas selimut tabung: "<<luas<<endl;
}
