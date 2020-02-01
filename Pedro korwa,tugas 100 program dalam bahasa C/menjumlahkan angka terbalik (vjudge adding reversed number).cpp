#include<stdio.h>
// soal Vjudge adding reversed number

int main(){
	int tcase,i;
	int x,y;
	scanf("%d", &tcase); // menginput test case
	for(i=0;i<tcase;i++){
		scanf("%d %d",&x,&y); // menginput 2 angka
		int temp1=0, temp2=0, temp3=0, result=0;
		// untuk membalik kedua angka tersebut lalu dijjumlahkan
		while(x!=0){		
			temp1=(temp1*10)+x%10;
			x/=10;
		}
		while(y!=0){
			temp2=(temp2*10)+y%10;
			y/=10;
		}
		temp3=temp2+temp1;
		while(temp3!=0){
			result=(result*10)+temp3%10;
			temp3/=10;
		}
		printf("%d \n", result);
	}
}
