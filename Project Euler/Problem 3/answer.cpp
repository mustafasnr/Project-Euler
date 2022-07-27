#include<iostream>
#include<math.h>
using namespace std;

bool is_prime(int x){
    for(int i=2;i<int(sqrt(x));i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

long largest_prime(long long value){
    long limit=long (sqrt(value));
    for(long j=limit;j>2;j--){
        if(is_prime(j)){
            if(value%j==0){
                return j;
            }
        }
    }
    return -1;
}


int main(){

    cout<<largest_prime(600851475143);


    return 0;
}