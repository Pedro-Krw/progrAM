#include<iostream>
#include<stdio.h>
#include<string.h>
//huruf polindrom
using namespace std;

char s[10000];
int palin(char s[]);

int main(){
    scanf("%[^\n]s", s); // menginput deret huruf
    if(palin(s) == 1)
        cout << "YA\n";
    else
        cout << "BUKAN\n";
    return 0;
}

// fungsi ini berguna untuk mengecek apaka huruf yang diinput
// jika dibalik dapat dibaca sama dengan yang sebelumnya
int palin(char s[])
{
    int flag = 1;
    int q = strlen(s) - 1;
    for(int i = 0; i < strlen(s) / 2; i++){
        if(s[i] != s[q]){
            flag = 0;
            break;
        }
        q--;
    }

    if(flag == 1)
        return 1;
    else
        return 0;
}
