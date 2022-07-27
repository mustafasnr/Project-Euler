#include<iostream>
using namespace std;

int main(){

   	int number[99999]={0};
	number[0]=1;
	int sum=0;
	int carry;
	int temp;
    int n;
    cout<<"kaç faktöriyel hesaplamak istersin? ";
    cin>>n;
    for(int fak=1;fak<n+1;fak++){
	    for(int i=0;i<1;i++){
	    	carry=0;
	    	for(int j=0;j<50000;j++){
	    		if(carry==0 && number[j]==0){

	    		}
	    		else{
	    			temp=number[j]*fak+carry;
	    			if(temp>9){
	    				number[j]=temp%10;
	    			}
	    			else{
	    				number[j]=temp;
	    			}
	    			carry=temp/10;
	    		}
	    	}
	    }
    }

	int control=0;
	for(int i=99998;i>=0;i--){
		sum+=number[i];
		if(number[i]!=0){
			control=1;
		}
		if(control){
			cout<<number[i];
		}
	}
	cout<<endl;
	cout<<sum<<endl;



}