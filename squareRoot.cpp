#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int number, result;
     cout<<"Enter a positive number:";
     cin>>number;
     if(number<0){
        cout<<"please do not enter a neqative number or zeri\n";
     }else{
        result=sqrt(number); //square root
        result*=result;
        if(result==number)
        cout<<"square root of "<<number<< " is an integer\n";
        else
        cout<<"The number entered is not integer\n";
     }
     return 0;
}

