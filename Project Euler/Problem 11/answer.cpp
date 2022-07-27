#include<iostream>
using namespace std;

int main(){
    int a[26][26];
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            a[i][j]=1;
        }
    }
    for(int i=3;i<23;i++){
        for(int j=3;j<23;j++){
            cin>>a[i][j];
        }
    }
    //
    int yon[8]={0,0,0,0,0,0,0,0};
    int y0,y1,y2,y3,y4,y5,y6,y7;
    for(int i=3;i<23;i++){
        for(int j=3;j<23;j++){
            cout<<a[i][j]<<"\t";
            y0=a[i][j]*a[i-1][j]*a[i-2][j]*a[i-3][j];    
            y1=a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3];
            y2=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
            y3=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
            y4=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
            y5=a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
            y6=a[i][j]*a[i][j-1]*a[i][j-2]*a[i][j-3];
            y7=a[i][j]*a[i-1][j-1]*a[i-2][j-2]*a[i-3][j-3];
            yon[0]=max(yon[0],y0);
            yon[1]=max(yon[1],y1);
            yon[2]=max(yon[2],y2);
            yon[3]=max(yon[3],y3);
            yon[4]=max(yon[4],y4);
            yon[5]=max(yon[5],y5);
            yon[6]=max(yon[6],y6);
            yon[7]=max(yon[7],y7);
        }
        cout<<endl;
    }
    for(int i=0;i<8;i++){
        cout<<yon[i]<<endl;
    }

    return 0;
}
