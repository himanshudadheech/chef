//Problem Code : HS08TEST

#include <iostream>

#include <iomanip>
using namespace std;

int main(){
    //demand and bank balance
    int d;
    float bal;
    
    cout<<"Enter demand";
    cin>>d;
    cout<<endl;
    
    cout<<"Enter Balance";
    cin>>bal;
    
    int g = d%5; //multiple of 5 ammount or demmand
    float tax;
    tax = d+0.5;
    
    if(g==0 && tax<=bal){
        
        bal = bal-tax;
        cout<<fixed<<setprecision(2)<<bal;
    }
    else
    {
        cout<<fixed<<setprecision(2)<<bal;
    }
}
