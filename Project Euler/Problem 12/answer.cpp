#include<iostream>
using namespace std;

long long int ucgen(long long int x){
    return x*(x+1)/2;
}
long long int bolen_sayisi(long long int x){
    long long int bolen=0;
    for(long long int i=1;i<x;i++){
        if(x%i==0){
            bolen++;
        }
    }
    return bolen;
}


int main(){
    int bolenler=0;
    long long int i;
    for(i=1;bolenler<500;i++){
        bolenler=bolen_sayisi(ucgen(i));
    }
    cout<<ucgen(i-1)<<endl;
    //15 minute
    return 0;
}