#include <stdio.h>
// soal praktikum KMY

int main (){
	int n, check;	
	scanf("%d", &n); // menginput angka banyak koin
	// untuk mengatur apakah mas pinan bisa menang
	// atau disuruh bermain lagi oleh adik-adiknya
	if(n>=1 && n<=1000000){		
		if(n%3==0){
			check=1;
		}
		else{
		check=0;
		}
		if (check==0){	
			printf("Hore, Mas Pinan Menang\n");
		}
		else if (check==1){
			printf("Kak, Main lagi yuk!\n");
		}
	}
return 0;
}
