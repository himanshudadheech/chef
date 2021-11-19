// Problem code FCTRL2

#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n; 
	
	for(int i =0 ; i<n;i++){
		int a;
		cin>>a;
		if(a>0){
		int f =1;
		
		while(a>0){
			f = f*a;
			a--;
		}
	 cout<<f<<endl;		
		}
		else{
			cout<<"0";
		}
		
	}
	
	
}
