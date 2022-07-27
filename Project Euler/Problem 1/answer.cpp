#include<iostream>
using namespace std;

int answer(int x){
    int sum=0;
    for(int i=0;i<x;i++){
        if(i%3==0 | i%5==0){
            sum+=i;
        }
    }
    return sum;
}



int main(){
    cout<<answer(1000);
    return 0;
}