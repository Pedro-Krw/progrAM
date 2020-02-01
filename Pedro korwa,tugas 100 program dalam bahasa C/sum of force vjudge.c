#include<stdio.h>
// soal Vjudge sum of force

int main(){
	("input.txt","r",stdin);
	int x[100][3];
	int sum[1][3];
	sum[0][0]=0;
	sum[0][1]=0;
	sum[0][2]=0;
	int i,j;
	int line;
	scanf("%d", &line); // menginput test case
	for(i=0;i<line;i++){
		for(j=0;j<3;j++){
			scanf("%d", &x[i][j]); // menginput gaya
		}
	}
	// menghitung sigma gaya
	for(j=0;j<3;j++){
		for(i=0;i<line;i++){
			sum[0][j]+=x[i][j];
		}
	}
	if(sum[0][0]==0 && sum[0][1]==0 && sum[0][2]==0) printf("sigma gaya = 0");
	else printf("sigma gaya != 0");
}
