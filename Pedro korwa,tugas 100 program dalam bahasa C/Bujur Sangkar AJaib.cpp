#include <stdio.h>
#include <string.h>
//bujur sangkar ajaib

int a;
int arr[100][100];
int i=1;

// fungsi ini berguna untuk menentuka bujur sangkar ajaib
// terjadi dalam baris dan kolom yang diinput
void fungsi (int n,int x,int y, int i,int z){
	if (i<=z){ 
		if (y!=0 &&x<=n){
			if (arr[y][x]==0){
    			arr[y][x]=i;
    			fungsi (n,x+1,y-1,i+1,z);
			}
			else fungsi (n,x-1,y+2,i,z);
		}
		else if (y==0 && x>n){
			x=n;
			y=2;
			fungsi (n,x,y,i,z);
		}
		else if (y==0){
			fungsi (n,x,n,i,z);
		}
		else if (x>n){
			x=1;
			fungsi (n,x,y,i,z);
 		}
	}
}

int main (){
	memset (arr,0,sizeof(arr));
	scanf ("%d", &a); // menginptut batas baris dan kolom
	int x=(a+1)/2, y=1, z=a*a;
	fungsi(a,x,y,i,z);
	for (int j=1;j<=a;j++){
		printf ("\n\n");
  		for (int k=1;k<=a;k++){
   			printf (" %d \t", arr[j][k]);
  		}
	}
}
