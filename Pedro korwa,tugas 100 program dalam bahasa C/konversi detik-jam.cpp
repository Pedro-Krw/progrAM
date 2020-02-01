#include <stdio.h>
//konversi detik ke jam, menit, dan detik

int main (){
	int d;
	long long m,j;
	printf ("Masukan detik = ");
	scanf ("%d", &d);// untuk menginput detik
	m=d/60; // 1 menit = 60 detik
	d-=60*m; // untuk mengurangi detik jika jumlah menit telah didapatkan
	j=m/60; // 1 jam = 60 menit
	m-=60*j; // untuk megurangi menit jika jumlah jam telah didapatkan
	printf ("detik = %d\n", d);
	printf ("Menit = %d\n", m);
	printf ("Jam   = %d", j);
	return 0;
}
