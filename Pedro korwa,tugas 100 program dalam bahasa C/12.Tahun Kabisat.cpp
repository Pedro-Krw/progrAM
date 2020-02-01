#include <iostream>
// Tahun Kabisat
using namespace std;

int main (){
	int a;
	cout << "Masukan Tahun = ";
	cin >> a; //input tahun
	//jika sisa pembagian a modulus 400 = 0, 
	//maka tahun tersebut kabisat.
	if(a%400==0){
		cout << a << " adalah tahun kabisat";
	}
	//jika sisa pembagian a modulus 400 dan 100 tidak sama 
	//dengan 0, tetapi a modulus 4 = 0, maka tahun tersebut kabisat.
	else if((a%400!=0)&&(a%100!=0)&&(a%4==0)){
		cout << a << " adalah tahun kabisat";
	//jika syarat diatas tidak dapat dipenuhi, maka
	//tahun tersebut bukan kabisat.
	}else cout << a << " bukan tahun kabisat";
		return 0;
}
