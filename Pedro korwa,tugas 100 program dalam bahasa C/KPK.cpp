#include <iostream>
// KPK
using namespace std;

int main(){
	int p,q,kpk,n;
	kpk=0;
	cout<<"program mencari KPK "<<endl;
	cout<<"Masukkan Nilai Bil ke 1 : "; 
	cin>>p; // menginput bilangan pertama
	cout<<"Masukkan Nilai Bil ke 2 : "; 
	cin>>q; // menginput bilangan kedua
	// untuk mencari KPK dari bil. 1 dan bil. 2 
	for(int x=1;x<=q;x++){
		kpk=kpk+p;
   		if(kpk % q==0){
    		cout<<"KPK bilangan "<<p<<" dan "<<q<<" Adalah "<<kpk; 
    		break;
		}
	}
}
