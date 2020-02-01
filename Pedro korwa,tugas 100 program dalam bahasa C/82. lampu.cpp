#include<stdio.h>
#include<string.h>

int main(){
	char lampu[6];
	printf("lampu yang menyala di lampu jalan berwarna\n");
	scanf("%s", &lampu);
	if(lampu[0]=='m' && lampu[1]=='e' && lampu[2]=='r' && lampu[3]=='a' && lampu[4]=='h') printf("maka kita harus berhenti!");
	else if(lampu[0]=='h' && lampu[1]=='i' && lampu[2]=='j' && lampu[3]=='a' && lampu[4]=='u') printf("silahkan jalan selamat sampai tujuan");
	if(lampu[0]=='k' && lampu[1]=='u' && lampu[2]=='n' && lampu[3]=='i' && lampu[4]=='n' && lampu[5]=='g') printf("maka hati hati dan jangan ngebut");

