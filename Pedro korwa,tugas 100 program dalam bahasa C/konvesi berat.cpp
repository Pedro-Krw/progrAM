#include <iostream>
//konversi berat
using namespace std;
int main()
{
    double beratb,tinggib,hasil;
    int pilihan;
    cout<<"Masukan Berat badan =";
    cin>>beratb; // input berat
    cout<<"Masukan Tinggi badan =";
    cin>>tinggib; // input tinggi
    hasil=beratb/(tinggib/100*tinggib/ 100);
    cout<<"Pilih Jenis Kelamin"<<endl;
    cout<<"1. Pria"<<endl;
    cout<<"2. Wanita"<<endl;
    cout<<"Masukan Jenis kelamin"<<endl;
    cin>>pilihan; // input pilihan
    // semua fungsi dibawah untuk menentukan anda ideal atau tidak
    if(pilihan==2 && hasil <17 ){
    cout<<"Anda seorang Wanita dengan badan"<<endl;
    cout<<"Kurus"<<endl;
}
   else if(pilihan==2 && hasil >=17 and hasil <=23){
    cout<<"Anda seorang Wanita dengan badan"<<endl;
    cout<<"Normal"<<endl;
}
    else if(pilihan==2 && hasil >=23 and hasil <=27){
    cout<<"Anda seorang Wanita dengan badan"<<endl;
    cout<<"Kegemukan"<<endl;
}
  else if(pilihan==2 && hasil > 27){
    cout<<"Anda seorang Wanita dengan badan"<<endl;
    cout<<"Obesitas"<<endl;
}
if(pilihan==1 && hasil <18 ){
    cout<<"Anda seorang Pria dengan badan"<<endl;
    cout<<"Kurus"<<endl;
}
   else if(pilihan==1 && hasil >=18 and hasil <=25){
    cout<<"Anda seorang Pria dengan badan"<<endl;
    cout<<"Normal"<<endl;
}
    else if(pilihan==1 && hasil >=25 and hasil <=27){
    cout<<"Anda seorang Pria dengan badan"<<endl;
    cout<<"Kegemukan"<<endl;
}
  else if(pilihan==1 && hasil > 27){
    cout<<"Anda seorang Pria dengan badan"<<endl;
    cout<<"Obesitas"<<endl;
}
    return 0;
}
