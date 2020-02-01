#include <stdio.h>
// soal praktikum PR

int main (){
	unsigned long long int a,b;
	scanf("%d",&a); // menginput angka
	b = a + 2;
	while (b%2==0){
		b = b / 2;
	}
	// jika ganji di tambah 2
	if (b!=1)
		printf("%d\n", a + 2);
	// selain itu output SOEKKA
	else
		printf("SOEKKA\n");
		
return 0;
}
