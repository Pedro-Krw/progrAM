#include <stdio.h>
//soal praktikum MGK

int main (){
	int a,b,c,d,e,f,jp,count;
	scanf("%d", &a); // menginput test case
	for (b=0;b<a;b++){
		scanf ("%d %d %d", &jp,&d,&e); // menginput jumlah player, jumlah tower, damage tower
		count=0;
		for (f=0;f<jp;f++){
		scanf ("%d", &c); // menginput health player
		// menentukan apakah semua player dapat melewati semua tower
		while (c>e){
			c-=e;
			count++;
		}
		}
		if (count>=d) printf ("YES\n");
		else printf ("NO\n");
	}
}
