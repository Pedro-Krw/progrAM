#include <stdio.h>
//membuat bintang dalam tembok dalam titik

int main (){
	int a,b,x,y;
	scanf("%d %d",&a,&b); // menginput batas baris dan kolom
	for (x=1;x<=a;x++){
		for (y=1;y<=b;y++){
			// untuk menepatkan (*) pada lapis ketiga dari dua tembok terluar
			if((x==1)|(x==2)|(y==1)|(y==2)|(x==a)|(x==a-1)|(y==b)|(y==b-1)){
				printf(".");
			}
			else {
				printf("*");
			}
		}printf("\n");
	}
	return 0;
}
