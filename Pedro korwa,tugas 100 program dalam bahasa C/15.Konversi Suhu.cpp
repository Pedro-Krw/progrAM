#include <stdio.h>
//konversi suhu

int main (){
	float s;
	char a;
	scanf("%f %c", &s, &a);// menginput suhu dan jenis suhu
	if (a=='C'){
		printf("C-R = %.2f R\n", float(4*s)/5);// untuk suhu C-R suhu inputsn harus dikali 4/5
		printf("C-F = %.2f F\n", (float(9*s)/5)+32); // untuk suhu C-F suhu inputan harus dikali 9/5, lalu + 32
		printf("C-K = %.0f K\n", s+273); // untuk suhu C-K suhu inputan harus + 273
	}
	if (a=='R'){
		printf("R-C = %.2f C\n", float(5*s)/4); // untuk suhu R-C suhu inputan harus dikali 5/4
		printf("R-F = %.2f F\n", (float(9*s)/4)+32); // untuk suhu R-F suhu inputan harus dikali 9/4, lalu + 32
		printf("R-K = %.2f K\n", (float(5*s)/4)+273); // untuk suhu R-K suhu inputan harus dikali 5/4, lalu + 273
	}
	if (a=='F'){
		printf("F-C = %.2f C\n", float(s-32)*5/9); // untuk suhu F-C suhu inputan harus - 32, lalu dikali 5/9
		printf("F-R = %.2f R\n", float(s-32)*4/9); // untuk suhu F-R suhu inputan harus - 32, lalu dikali 4/9
		printf("F-K = %.2f K\n", (float(s-32)*5/9)+273); // untuk suhu F-C suhu inputan harus - 32, lalu dikali 5/9, lalu + 273
	}
	if (a=='K'){
		printf("K-C = %.0f C\n", s-273); // untuk suhu K-C suhu inputan harus - 273
		printf("K-R = %.2f R\n", (s-273)*4/5); // untuk suhu K-R suhu inputan harus - 273, lalu dikali 4/5
		printf("K-F = %.2f F\n", ((s-273)*9/5)+32); // untuk suhu K-F suhu inputan harus - 273, lalu dikali 9/5, + 32
	}
return 0;
}
