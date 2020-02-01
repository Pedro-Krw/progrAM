#include <iostream>
// soal praktikum KVK
using namespace std;

int score,x1,x2,y1,y2;
char ord [10][10];
void fung(int w,int x,int y,int z,int time);

int main(){
	int a,b,c,e,f,time;
	cin >> a; // menginput test case
	for (b=0;b<a;b++){
		cin >> c;
		for (e=0;e<c;e++){
			cin >> ord[e];
		}
	
	cin>>x1>>y1>>x2>>y2>>time; // menginput titik awal, titik akhir dan waktu 
	fung(x1,y1,x2,y2,time);
	if (time>=0 && time%2==0 && score==1){
		cout <<"Case #"<<b+1<<": YA\n";
		}	
	else{
		cout <<"Case #"<<b+1<<": TIDAK\n";
		}
	}
}

// untuk menentukan apakah input waktu yang diberikan
// mampu memjalankan titik awal mencapai titik akhir
void fung(int w,int x,int y,int z,int time){
	time--;
	ord[w][x]='#';
	if ( w==x && y==z){
		score=1;
	}
	if (ord[w+1][x]=='*' && w+1<8){
		fung(w+1,x,y,z,time);
	}
		if (ord[w-1][x]=='*' && w-1>=0){
		fung(w-1,x,y,z,time);
	}
		if (ord[w][x+1]=='*' && x+1<8){
		fung(w,x+1,y,z,time);
	}
		if (ord[w][x-1]=='*' && x-1>=0){
		fung(w,x-1,y,z,time);
	}
}
