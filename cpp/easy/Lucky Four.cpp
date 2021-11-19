//Problem Code: LUCKFOUR
#include <iostream>
using namespace std;

int main(){
 int t;
 cin>>t;
 
 
 for(int i=0;i<t;i++){
     int a;
     cin>>a;
     int count;
 count =0;
     int r;
     while(a>0){
	  r = a%10; //last value from a 1434 4
	  if(r==4){
     	count++; //1 
	 }
	  a = a/10;  //143
     
	 
}
cout<<count<<endl;
}
	 
 }
 
 
 
 
