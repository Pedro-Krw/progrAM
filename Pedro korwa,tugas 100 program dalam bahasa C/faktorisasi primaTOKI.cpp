#include<iostream>
#include<string.h>
#include<math.h>
// soal TOKI faktorisasi prima
using namespace std;

bool arr[1000001];
int count_arr[1000001];

int main()
{
    memset(arr, true, sizeof(arr));
    memset(count_arr, 0, sizeof(count_arr));
    int n, temp, flag;
    cin >> n; // menginput angka yang akan difaktor primakan
    for(int i = 2; i <= sqrt(n); i++){
        if(arr[i]){
            for(int j = i * 2; j <= n; j += i){
                arr[j] = false;
            }
        }
    }
    temp = n; //untuk pembanding for di paling bawah
    for(int i = 2; i <= n; i++){
        while(n % i == 0 && arr[i] == true){
            n /= i;
            count_arr[i]++;
        }
        if(n == 1){
            flag = i;
            break;
        }
    }
    for(int i = 2; i <= temp; i++){
        if(count_arr[i] != 0){
            if(i == flag){
                if(count_arr[i] != 1)
                    cout << i << "^" << count_arr[i] << "\n";
                else
                    cout << i << "\n";
            }
            else{
                if(count_arr[i] != 1)
                    cout << i << "^" << count_arr[i] << " x ";
                else
                    cout << i << " x ";
            }
        }
    }
	return 0;
}
