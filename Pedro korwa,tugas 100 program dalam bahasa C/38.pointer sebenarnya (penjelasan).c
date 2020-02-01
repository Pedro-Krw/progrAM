#include <stdio.h>
// poninter sebenarnya

int main () {
   int  var = 20;   // variabel sebenarnya
   int  *ip;        // deklarasi vaiabel pointer
   ip = &var;  // alamat penyimpanan var dalam variabel penunjuk
   printf("Address of var variable: %x\n", &var  );
   // alamat penyimpanan var dalam variabel penunjuk
   printf("Address stored in ip variable: %x\n", ip );
   // mengakses nilai menggunakan penunjuk
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
