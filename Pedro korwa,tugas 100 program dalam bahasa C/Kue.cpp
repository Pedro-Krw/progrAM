#include<stdio.h>

int main(){
 printf("Program membagi kue\ninput potongan kue dan orang yang ingin  makan\n");
 int x,y;
 scanf("%d %d", &x, &y);// input angka dan pembaginya
 if(y>x) printf("kue tidak bisa dibagi rata untuk %d orang :(\n", y);
 printf("masing-masing mendapat %d potong \nbersisa %d\n", (x/y), (x%y)); //hasil output
}
