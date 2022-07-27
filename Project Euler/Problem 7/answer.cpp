#include<iostream>
#include<math.h>
using namespace std;

bool is_prime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}



int nth_prime(int x){
    int prime=0;
    int flag=0;
    for(int i=2;flag<x;i++){
        if(is_prime(i)){
            prime=i;
            flag++;
        }
    }
    return prime;
}




int main(){

    cout<<nth_prime(10001);    



    return 0;
}