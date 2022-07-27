#include<iostream>
using namespace std;

int toplam(int a){
    return (a*(a+1)/2);
}

int kare_toplami(int x){
    int toplam=0;
    for(int i=1;i<x+1;i++){
        toplam+=i*i;
    }
    return toplam;
}

int toplam_karesi(int a){
    int u=toplam(a);
    return u*u;
}



int main(){

    cout<<toplam_karesi(100)-kare_toplami(100)<<endl;


    return 0;
}