#include <iostream>
//mencari jumlah digit paling banyak dari suatu derat angka
using namespace std;

int BK(long int x, int d) 
{ 
    int count = 0;  // mengidentifikasi angka count
    while (x) 
    { 
        // menghitung jumlah digit terbesar
        if (x%10 == d) 
           count++; 
        x = x/10; 
    } 
    return count; 
} 
  
int DT(long int x) // menghitung digit dengan frekuensi terbanyak
{ 
   if (x < 0) 
      x = -x; // jika x bernilai minus
  
   int AT = 0; //menidentifikasi angka terbanyak 
   int jcount = 1; // menidentifikasi banyak count pada AT 
   for (int d=0; d<=9; d++) 
   { 
      int count = BK(x, d); //menyatakan banyak count sama seperti fungsi BK;
      if (count >= jcount) 
    	{ 
        	jcount = count; 
        	AT = d; 
    	} 
   } 
   return AT; 
} 
   
int main() 
{ 
    long int x;
    cout<<"Masukan Deret angka = ";
	cin>>x; // menginput deret angka
    cout << "Angka dengna frekuensi terbanyak = " << DT(x); 
    return 0;
} 
