#include <stdio.h>
#define ordo 5
//Rat in Maze

//map pada labirin
int labirin[ordo][ordo] = {
    {0,1,0,1,1},
    {0,0,0,0,0},
    {1,0,1,1,1},
    {0,0,1,0,0},
    {1,0,0,0,0},
};
//mariks untuk mengisis solusi
int solusi[ordo][ordo];
//fungsi untuk mencetak matrks solution
void printsolusi(){
    int i,j;
    for(i=0;i<ordo;i++){
        for(j=0;j<ordo;j++){
            printf("%d ",solusi[i][j]);
        }
        printf("\n");
    }
}
//fungsi untuk memecahkan labirin 
//memakai backtracking
int penye(int r, int c){
    //jika telan sampai di tujuan, labirin terpecahkan
    //tujuan terakhir adalah (maze[ordo-1][ordo-1])
    if((r==ordo-1) && (c==ordo-1)){
        solusi[r][c] = 1;
        return 1;
    }
    //memeriksa apakah kita dapat mengunjungi sel ini atau tidak
	//indeks sel harus dalam (0, ordo-1),solusi [r] [c] == 0 untuk
	//memastikan bahwa sel tersebut belum mengunjungi,
	//dan labirin [r] [c] == 0 memastikan sel tidak terhalang
    if(r>=0 && c>=0 && r<ordo && c<ordo && solusi[r][c] == 0 && labirin[r][c] == 0){
        //jika aman untuk dilewati maka...
        solusi[r][c] = 1;
        //kebawah
        if(penye(r+1, c))
            return 1;
        //kekanan
        if(penye(r, c+1))
            return 1;
        //keatas
        if(penye(r-1, c))
            return 1;
        //kekiri
        if(penye(r, c-1))
            return 1;
        //backtracking
        solusi[r][c] = 0;
        return 0;
    }
    return 0;
}

int main(){
    //membuat semua angka yang berada di matriks solution menjadi 0
    int i,j;
    for(i=0; i<ordo; i++){
        for(j=0; j<ordo; j++){
            solusi[i][j] = 0;
        }
    }
    if (penye(0,0)){
        printsolusi();
	}
    else{
        printf("Tidak ada jalan\n");
	}
    return 0;
}
