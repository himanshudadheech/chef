//Problem code FLOW004

#include <iostream>
using namespace std;

int main(){
 int t;
 cin>>t;
 
 
 for(int i=0;i<t;i++){
     int a;
     cin>>a;
     int b;
     int r;
     r = a%10; //last value from a 123 3
     while(a>0){
     b = a%10;
     a = a/10;
 }
 
 cout<<r+b<<endl;
 }
}
