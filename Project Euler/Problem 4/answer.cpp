#include<iostream>
using namespace std;

bool palindrom(string x){
    int begin,end;
    begin=0;
    end=x.size()-1;
    while(begin<end){
        if(x[begin]!=x[end]){
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int most_palindrom(){
    int mul=0;
    int max=0;
    for(int nnn=999;nnn>99;nnn--){
        for(int x=999;x>99;x--){
            mul=nnn*x;
            if(palindrom(to_string(mul))){
                if(max<mul){
                    max=mul;
                }
            }
        }
    }
    return max;
}

int main(){
    cout<<most_palindrom();
    


    return 0;
}