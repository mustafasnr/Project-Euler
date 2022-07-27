#include<iostream>
#include<vector>
using namespace std;



int even_fib(){
    vector<int> ans;
    int sayac=0;
    int sum=0;
    int a=1;
    int b=1;
    int c;
    for(int i=0;;i++){
        c=a+b;
        a=b;
        b=c;
        if(b>=4000000){
            break;
        }
        else{
            if(b<4000000 & b%2==0){
                sayac++;
                sum+=b;
            }
        }
    }
    return sum;
}






int main(){
    cout<<even_fib();





    return 0;
}