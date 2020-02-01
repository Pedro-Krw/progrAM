#include <stdio.h>
#include <stdlib.h>
// Volume Prisma

int main(){
    float a,ts,tp,v;
    printf("menghitung vol prisma segitiga\n\n");
    printf("masukkan alas segitiga, tinggi segitiga, tinggi prisma : \n");
	scanf("%f %f %f",&a,&ts,&tp); // menginput alas, tinggi segitiga, tingga prisma
    v=0.5*a*ts*tp; // rumus volume
    printf("vol %.2f", v);
    return 0;
}
