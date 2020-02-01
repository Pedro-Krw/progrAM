#include<stdio.h>
// menghitung langkah yang dibutuhkan

int main(){
	int x1,x2,y2,y1,a,b;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2); // menginput titik awal dan titik akhir
	// untuk mencari berapa langkah yang dibutuhkan
	a=x1-x2; 
	if(a<0) a*=-1;
	b=y1-y2;
	if(b<0) b*=-1;
	printf("%d\n", a+b);
}
