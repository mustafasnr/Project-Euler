#include<iostream>
using namespace std;


int ekok(int a,int b){
    int kucuk,buyuk;
    if(a<b){
        kucuk=a;
        buyuk=b;
    }
    else{
        kucuk=b;
        buyuk=a;
    }
    int kat=kucuk;
    while(kat%kucuk!=0 || kat%buyuk!=0){
        kat+=kucuk;
    }
    return kat;
}

int ekok_2(int dizi[],int n){
    int u=ekok(dizi[0],dizi[1]);
    for(int i=2;i<n-1;i++){
        u=ekok(u,dizi[i]);
    }
    return u;
}

int main(){
    int dizi[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cout<<ekok_2(dizi,20);


    return 0;
}