#include <iostream>
//mencari huruf alfabet
using namespace std;

int main() {
    char line[100], alphabetString[100];
    int j = 0;
    cout << "Masukan Huruf : ";
    cin.getline(line, 100); // menginput hurf dan karakter lain
    // untuk mencari huruf alfabet dalam inputan yang diberikan
    for(int i = 0; line[i] != '\0'; ++i){
        if ((line[i] >= 'a' && line[i]<='z') || (line[i] >= 'A' && line[i]<='Z')){
            alphabetString[j++] = line[i]; 
        }
    }
    alphabetString[j] = '\0';
    cout << "Alfabet yang didapat : " << alphabetString;    
    return 0;
}
