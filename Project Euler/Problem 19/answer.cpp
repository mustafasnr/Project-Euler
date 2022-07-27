#include<iostream>
using namespace std;

bool artik_hesabi(int i){
    if (i % 4 == 0){
        if (i % 100 == 0){
            if (i % 400 == 0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}

int main(){
    int normal[13]={31,28,31,30,31,30,31,31,30,31,30,31,0};
    int artik[13]={31,29,31,30,31,30,31,31,30,31,30,31,0};
    int gunler[7]={0,0,0,0,0,0,0};
    int gun=1;
    int pazar_sayisi=0;
    bool yillar[100];
    for(int i=1901;i<2001;i++){
        yillar[i-1901]=artik_hesabi(i);
    }

    for(int i=0;i<100;i++){
        if(yillar[i]){//artıksa
            for(int ay=0;ay<12;ay++){
                if(gun%7==6){//pazartesi mod7 de 0 ise pazar mod7 de 6 dır
                    pazar_sayisi++;
                }
                gun+=artik[ay];
            }
            gun=gun%7;
        }
        else{//artık değilse
            for(int ay=0;ay<12;ay++){
                if(gun%7==6){
                    pazar_sayisi++;
                }
                gun+=normal[ay];
            }
            gun=gun%7;
        }
        
    }
    cout<<endl;
    cout<<"2001 in başlangıç günü: "<<gun<<endl;
    cout<<pazar_sayisi<<endl;
    return 0;
}