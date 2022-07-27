#include<iostream>
using namespace std;

unsigned long int max_chain(unsigned long int x){
    unsigned long int i=0;
    while(x!=1){
        i++;
        if(x%2==0){
            x=x/2;
        }
        else{
            x=x*3+1;
        }
    }
    return i;
}




int main(){
    unsigned long int chain=0;
    unsigned long int max=0;
    unsigned long int a;
    for(a=1;a<1000000;a++){
        if(max_chain(a)>chain){
            chain=max_chain(a);
            max=a;
        }
    }
    cout<<max<<"->"<<chain<<endl;

}
