#include<iostream>
#include<math.h>
using namespace std;
bool asalmi(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int inci_asal(int x){
    int sayac=0;
    int asal;
    for(int i=2;sayac<x;i++){
        if(asalmi(i)){
            sayac++;
            asal=i;
        }
    }
    return asal;
}

unsigned long long int asal_toplam(int a){
    unsigned long long int toplam=0;
    int i=1;
    while(inci_asal(i)<a){
        toplam+=inci_asal(i);
        i++;
    }
    return toplam;
}




int main(){
    cout<<asal_toplam(2000000);


    return 0;
}