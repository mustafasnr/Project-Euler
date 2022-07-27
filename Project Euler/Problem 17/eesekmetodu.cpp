#include<iostream>
using namespace std;

string digit(int x){
    if(x==0){
        return "";
    }
    if(x==1){
        return "one";
    }
    if(x==2){
        return "two";
    }
    if(x==3){
        return "three";
    }
    if(x==4){
        return "four";
    }
    if(x==5){
        return "five";
    }
    if(x==6){
        return "six";
    }
    if(x==7){
        return "seven";
    }
    if(x==8){
        return "eight";
    }
    if(x==9){
        return "nine";
    }
}
string teen(int x){
    if(x==0){
        return "ten";
    }
    if(x==1){
        return "eleven";
    }
    if(x==2){
        return "twelve";
    }
    if(x==3){
        return "thirteen";
    }
    if(x==4){
        return "forteen";
    }
    if(x==5){
        return "fifteen";
    }
    if(x==6){
        return "sixteen";
    }
    if(x==7){
        return "seventeen";
    }
    if(x==8){
        return "eightteen";
    }
    if(x==9){
        return "nineteen";
    }
}
string two_digit(int x){
    if(x<10){
        return digit(x);
    }
    else{
        int number=x/10;
        if(number==1){
            return teen(x%10);
        }
        if(number==2){
            return "twenty" + digit(x%10);
        }
        if(number==3){
            return "thirty" + digit(x%10);
        }
        if(number==4){
            return "forty" + digit(x%10);
        }
        if(number==5){
            return "fifty" + digit(x%10);
        }
        if(number==6){
            return "sixty" + digit(x%10);
        }
        if(number==7){
            return "seventy" + digit(x%10);
        }
        if(number==8){
            return "eighty" + digit(x%10);
        }
        if(number==9){
            return "ninety" + digit(x%10);
        }
    }
}
string three_digit(int x){
    int number=x/100;
    if(number==1){
        return "onehundredand" + two_digit(x%100);
    }
    if(number==2){
        return "twohundredand" + two_digit(x%100);
    }
    if(number==3){
        return "threehundredand" + two_digit(x%100);
    }
    if(number==4){
        return "fourhundredand" + two_digit(x%100);
    }
    if(number==5){
        return "fivehundredand" + two_digit(x%100);
    }
    if(number==6){
        return "sixhundredand" + two_digit(x%100);
    }
    if(number==7){
        return "sevenhundredand" + two_digit(x%100);
    }
    if(number==8){
        return "eighthundredand" + two_digit(x%100);
    }
    if(number==9){
        return "ninehundredand" + two_digit(x%100);
    }
}
string print(int x){
    if(x<10){
        return digit(x);
    }
    if(x<100){
        
        return two_digit(x);
    }
    if(x<1000){
        return three_digit(x);
    }
}







int main(){
    string number="onethousand";
    
    for(int i=1;i<1000;i++){
        number+=print(i);
    }
    cout<<number.length()-27<<endl;
    return 0;
}