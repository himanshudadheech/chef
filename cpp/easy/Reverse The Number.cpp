// Problem Code 

#include<iostream>
using namespace std;

int main(){
	
int t;
cin>>t;


for(int i=0;i<t;i++)
{
    int a;
	cin>>a; 
  int f =0;
   
	while(a>0){
      
  	  int r =a%10; 
  	  f = (r+f)*10;
  	  a =a/10;
    
	}
    cout<<f/10<<endl; 
    
}
	
	
}
