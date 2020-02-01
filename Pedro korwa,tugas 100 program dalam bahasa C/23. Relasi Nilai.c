#include <stdio.h>
//Relasi nilai

int main(){
	int a,b,x;	
	scanf("%d %d %d",&a,&b,&x); // Input 3 (a,b,x) nilai yang akan direlasikan
	// menentukan apakah a lebih besar x dan a juga keliptan x
	if ((a>x) && (a%x==0)){
		printf("%d lebih besar %d dan %d kelipatan %d\n",a,x,a,x);
	}
	// menentukan apakah a lebih besar x dan a bukan keliptan x
	else if ((a>x) && (a%x!=0)){
		printf("%d lebih besar %d dan %d bukan kelipatan %d\n",a,x,a,x);
	}
	// menentukan apakah a lebih kecil x dan x juga keliptan s
	else if ((a<x) && (x%a==0)){
		printf("%d lebih kecil %d dan %d kelipatan %d\n",a,x,x,a);
	}
	// menentukan apakah a lebih kecil x dan x bukan keliptan a
	else if ((a<x) && (x%a!=0)){
		printf("%d lebih kecil %d dan %d bukan kelipatan %d\n",a,x,x,a);
	}
	// menentukan apakah a sama dengan x
	else if (a==x){
		printf("%d sama dengan %d\n",a,x);
	}
	// menentukan apakah b lebih besar x dan b juga keliptan x
	if ((b>x) && (b%x==0)){
		printf("%d lebih besar %d dan %d kelipatan %d\n",b,x,b,x);
	}
	// menentukan apakah b lebih besar x dan b bukan keliptan x
	else if ((b>x) && (b%x!=0)){
		printf("%d lebih besar %d dan %d bukan kelipatan %d\n",b,x,b,x);
	}
	// menentukan apakah b lebih kecil x dan x juga keliptan b
	else if ((b<x) && (x%b==0)){
		printf("%d lebih kecil %d dan %d kelipatan %d\n",b,x,x,b);
	}
	// menentukan apakah b lebih kecil x dan x bukan keliptan b
	else if ((b<x) && (x%b!=0)){
		printf("%d lebih kecil %d dan %d bukan kelipatan %d\n",b,x,x,b);
	}
	// menentukan b sama dengan x
	else if (b==x){
		printf("%d sama dengan %d\n",b,x);
	}
	return 0;

}
