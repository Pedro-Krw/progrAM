#include <iostream>
#include <string.h>
//soal praktikum BAK
using namespace std;

char tbl [8][8];
void pagris(int x,int y);
int main(){
	int count=0;
	for (int x=0;x<8;x++){
	for (int y=0;y<8;y++){
		cin>>tbl[x][y]; // menginput map
		}
	}
	// untuk menghitung kalan (_) pada map yang input
	for (int x=0;x<8;x++){
		for (int y=0;y<8;y++){
			if (tbl [x][y]=='-'){
			count++;
			tbl [x][y]='#';
			pagris(x,y);
			}
		}
	}
cout<<count;
}

//untuk mencari jalan yang dapat dilewati (mencari jalan (_) bukan yang (*))
void pagris(int x,int y){
	if (tbl[x-1][y]=='-' && x-1>=0){
		tbl[x-1][y]='#';
		pagris(x-1,y);
	}
	if (tbl[x+1][y]=='-' && x+1<8){
		tbl[x+1][y]='#';
		pagris(x+1,y);
	}
	if (tbl[x][y-1]=='-' && y-1>=0){
		tbl[x][y-1]='#';
		pagris(x,y-1);
	}
	if (tbl[x][y+1]=='-' && y+1<8){
		tbl[x][y+1]='#';
		pagris(x,y+1);
	}
}
