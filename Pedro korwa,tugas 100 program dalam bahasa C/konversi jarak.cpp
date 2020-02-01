1#include <iostream>
using namespace std;
// konversi jarak

int main() {
     int cm,m,km,a,b,c;
     cout<<"konversi dari cm ke km,m,cm:"<<endl;
     cout<<"masukan nilai a:";
     cin>>a; // menginput angka
      // konversi km,m,cm
     km=a/100000;
     b=a%100000; 
     m=b/100;
     c=b%1000;
     cm=c;
     cout<<endl<<endl;
     cout<<"km="<<a/100000<<endl<<endl;
     cout<<"m="<<b/100<<endl<<endl;
     cout<<"cm="<<c<<endl<<endl;
}
