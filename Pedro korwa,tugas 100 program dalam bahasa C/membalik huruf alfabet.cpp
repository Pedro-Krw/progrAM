#include <iostream>
// cara membalik huruf
using namespace std;

void reverse(const string& a);

int main(){
    string str;
    cout << "Masukan Huruf " << endl;
    getline(cin, str); // menginput huruf
    reverse(str);
    return 0;    
}

// untuk membalik huruf yang diinput
void reverse(const string& str){
    size_t numOfChars = str.size();
    if(numOfChars == 1)
       cout << str << endl;
    else{
       cout << str[numOfChars - 1];
       reverse(str.substr(0, numOfChars - 1));
    }
}
