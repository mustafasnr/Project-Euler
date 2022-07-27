#include<iostream>
using namespace std;

void large_sum(int a[],int b[],int c[]){
    int carry=0;
    int temp;
    for(int i=0;i<1500;i++){
        temp=a[i]+b[i]+carry;
        if(temp>9){
            c[i]=temp%10;
        }
        else{
            c[i]=temp;
        }
        carry=temp/10;
    }
}

void large_swap(int x[],int y[]){
    int temp;
    for(int i=0;i<1500;i++){
        x[i]=y[i];
    }
}


void large_fib(int a[],int b[],int c[]){
    int index=2;
    for(int i=0;;i++){
        if(b[999]!=0){
            cout<<"index: "<<index<<endl;
            break;
        }
        else{
            index++;
            large_sum(a,b,c);
            large_swap(a,b);
            large_swap(b,c);
        }
    }
}







int main(){

    int a[1500]={0};
    int b[1500]={0};
    int c[1500]={0};
    a[0]=1;
    b[0]=1;
    large_fib(a,b,c);
    int control=0;
    for(int i=1499;i>=0;i--){
        if(c[i]!=0){
            control=1;
        }
        if(control){
            cout<<c[i];
        }
    }

    return 0;
}