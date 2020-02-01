#include<iostream>
// counting sort
using namespace std;

int k=0;
void Counting_Sort(int A[],int B[],int n);

int main(){
	int n;
	cout<<"Berapa Banyak data : ";
	cin>>n;// menginput test case
	int A[n],B[n]; 
	for(int i=1;i<=n;i++){
		cin>>A[i]; // menginput angka yang anda inginkan
		if(A[i]>k){
			k=A[i];              
		}
	}
	// untuk mengcounting sort angka yang diinput dari kecil ke besar
	Counting_Sort(A,B,n);        
	for(int i=1;i<=n;i++){
		cout<<B[i]<<" ";
	}
	cout<<endl;
	return 0;
}

void Counting_Sort(int A[],int B[],int n){
	int C[k];
	for(int i=0;i<k+1;i++){
		C[i]=0;
	}
	for(int j=1;j<=n;j++){
		C[A[j]]++;			    
	}
	for(int i=1;i<=k;i++){
		C[i]+=C[i-1];            
	}
	for(int j=n;j>=1;j--){
		B[C[A[j]]]=A[j];          
		C[A[j]]=C[A[j]]-1;		  
	}
}
