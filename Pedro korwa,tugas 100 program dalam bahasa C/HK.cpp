#include <stdio.h>
#include <string.h>
// soal praktikum HK

char arr[100000];
char arrtugi[0];
int main (){
	int Lora,scormax;
	char x;
	scanf ("%s", &arr); // menginput jumlah huruf yang diinginkan
	Lora = strlen(arr);
	
	// fungsi ini berguna untuk menentukan berapa jumlah satu huruf 
	// paling banyak dalam banyak huruf yang diinput
	for(int y=0;y<Lora;y++){
		if(arr[y]=='A') arrtugi[0]++;
		if(arr[y]=='B') arrtugi[1]++;
		if(arr[y]=='C') arrtugi[2]++;
		if(arr[y]=='D') arrtugi[3]++;
		if(arr[y]=='E') arrtugi[4]++;
		if(arr[y]=='F') arrtugi[5]++;
		if(arr[y]=='G') arrtugi[6]++;
		if(arr[y]=='H') arrtugi[7]++;
		if(arr[y]=='I') arrtugi[8]++;
		if(arr[y]=='J') arrtugi[9]++;
		if(arr[y]=='K') arrtugi[10]++;
		if(arr[y]=='L') arrtugi[11]++;
		if(arr[y]=='M') arrtugi[12]++;
		if(arr[y]=='N') arrtugi[13]++;
		if(arr[y]=='O') arrtugi[14]++;
		if(arr[y]=='P') arrtugi[15]++;
		if(arr[y]=='Q') arrtugi[16]++;
		if(arr[y]=='R') arrtugi[17]++;
		if(arr[y]=='S') arrtugi[18]++;
		if(arr[y]=='T') arrtugi[19]++;
		if(arr[y]=='U') arrtugi[20]++;
		if(arr[y]=='V') arrtugi[21]++;
		if(arr[y]=='W') arrtugi[22]++;
		if(arr[y]=='X') arrtugi[23]++;
		if(arr[y]=='Y') arrtugi[24]++;
		if(arr[y]=='Z') arrtugi[25]++;
	}
	scormax=arrtugi[0];
	x='A';
	for(int z=0;z<26;z++){
		if(arrtugi[z]>scormax){
			scormax=arrtugi[z];
			x=65+z;
		}
	}
	printf("%c\n", x);
	return 0;
}
