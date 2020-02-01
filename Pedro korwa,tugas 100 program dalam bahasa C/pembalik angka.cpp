#include <stdio.h>
//pembalik angka

 int main() {
 	int a;
 	scanf("%d",&a); //menginput angka
 	// membalik angka inputan
 	while(a>0) {
 		printf("%d",a%10);
 		a/=10;
	 }
	 printf("\n");
	 return 0;
 }
