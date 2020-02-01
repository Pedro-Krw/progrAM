#include<stdio.h>
//simulator dimas kanjeng

int main() {
	int select;
	int uang = 100000;
	
	printf("Simulator Dimas Kanjeng\nUang awalmu adalah %d\n", uang);
	printf("\t1. Gandakan Uang\n");
	printf("\t2. Kabur\n");
	printf("\t3. Keluar\n");
	printf("> ");
	
	scanf("%d", &select);
	
	switch(select) {
		case 1:
			uang*=2;
			printf("Sekarang uangmu adalah %d\n",uang);
			break;
		case 2:
			printf("Dimas Kanjeng is on the loose\n");
			break;
		case 3:
			printf("Yah keluar\n");
			break;
		default:
			printf("Pilihan tidak sesuai\n");
	}
	
	return 0;
}
