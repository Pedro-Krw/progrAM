#include <stdio.h> 
  
void MenaraHanoi(int n, char x, char y, char z){ 
    if (n == 1) { //Jika n sama dengan satu maka fungsi print tersebut berjalan.
        printf("\ndari posisi %c ke posisi %c",x, y); 
        return;
    } 
    MenaraHanoi(n-1, x, z, y); //jika n tidak sama dengan satu maka dilanjutkan dengan fungsi tersebut.
    printf("\ndari posisi %c ke posisi %c", x, y); 
    MenaraHanoi(n-1, z, y, x); //setelah di print, nilai n-1, dan posisinya diubah menjadi z, y , dan x
} 
  
int main() { 
    int n;
    printf ("Jumlah Piringan : ");
	scanf ("%d", &n);//Menginput jumlah piringan yang di inginkan.
    MenaraHanoi(n, '1', '2', '3');  // 1, 2, dan 3 adalah posisi piringan
    return 0; 
} 
