#include <iostream>
#include <math.h>
//pitagoras
using namespace std;

int main(){
    float A,B,C;
    cout << "mencari sisi miring A"<<endl;
    cout <<"masukkan sisi B = ";
    cin	>> B; // menginput sisi b
	cout <<"masukkan sisi C = ";
    cin	>>C; // menginput sisi c
    A = sqrt(pow(C,2)-pow(B,2)); // rumus pitagoras
    cout << "jadi hasilnya adalah = "<< A;
    return 0; 
}
