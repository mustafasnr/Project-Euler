#include<iostream>
using namespace std;

int main(){

    int origin=1;
    int temp=1;
    for(int i=2;i<1001;i+=2){
        for(int j=0;j<4;j++){
            temp+=i;
            origin+=temp;
        }
    }

    cout<<origin<<endl;

    return 0;
}
