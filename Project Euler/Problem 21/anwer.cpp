#include<iostream>
#include<map>
using namespace std;
int amicable(int x){
    int divs=0;
    for(int i=1;i<x;i++){
        if(x%i==0){
            divs+=i;
        }
    }
    return divs;
}

//daha iyi çözümü var eminim bundan 
int main(){
    int sum=0;
    for(int i=1;i<10000;i++){
        if(i==amicable(amicable(i)) && i!=amicable(i)){
            cout<<"i:bu "<<i<<" karşılığı bu: "<<amicable(i)<<endl;
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}
