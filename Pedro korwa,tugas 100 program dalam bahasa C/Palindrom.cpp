#include <iostream>
// angka palindrom
using namespace std;

int main(){
	int n, num, digit, rev = 0;
    cout << "Masukan Angka: ";
    cin >> num; // masukan angka
    n = num;
    // untuk mebalik angka tersebut
    do {
    	digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } 
	while(num != 0);{
    	cout << "Kebalikan dari angka tersebut: " << rev << endl;
    	if (n == rev){
        	cout << "Angka tersebut palindrome.";
    	}
    	else{
        	cout << "Angaka tersebut bukan palindrome.";
		}
	}
    return 0;
}
